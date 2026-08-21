class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        for (int i = 0; i <= num; i++) {
            string s_num = to_string(i);
            reverse(s_num.begin(), s_num.end());
            int rNum = stoi(s_num);
            if (i+rNum == num) {
                return true;
            } 
        }
        return false;
    }
};