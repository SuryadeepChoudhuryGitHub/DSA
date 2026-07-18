class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (int i = 0, n = jewels.size(); i < n; i++) {
            for (int j = 0, m = stones.size(); j < m; j++) {
                if (jewels[i] == stones[j]) {
                    count++;
                    stones[j] = '-';
                }
            }
        }
        return count;
    }
};