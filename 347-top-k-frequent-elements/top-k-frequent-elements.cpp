class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;
        for (int i = 0, n = nums.size(); i < n; i++) {
            freq[nums[i]]++;
        }

        vector<int> output = {};
        for (int i = 0; i < k; i++) {
            int maximum = 0;
            for(auto &j:freq) {
                if (j.second > freq[maximum]) {
                    maximum = j.first;
                }
            }
            freq[maximum] = -1;
            output.push_back(maximum);
        }
        return output;
    }
};