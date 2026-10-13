#include <string>
class Solution {
public:
    int hammingWeight(int n) {
        string binary = bitset<32>(n).to_string();
        size_t count{0};
        // size_t length = binary.size();
        for (int i =0; i < binary.size(); i++) {
            if (binary[i] == '1') {
                count++;
            }
            else{
                continue;
            }
        }
        return count;
    }
};