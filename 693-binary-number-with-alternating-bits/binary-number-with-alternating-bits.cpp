class Solution {
public:
    vector<int> find_bin(int n) {
        vector<int> output = {};
        while (n > 0) {
            output.push_back(n%2);
            n /= 2;
        }
        return output;
    }
    bool hasAlternatingBits(int n) {
        vector<int> binary = find_bin(n);
        bool output = true;
        for (int i = 0; i < binary.size()-1; i++) {
            if (binary[i] == binary[i+1]) {
                return false;
            }
        }
        return output;
    }
};