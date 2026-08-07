class Solution {
public:
    int smallestEvenMultiple(int n) {
        int i {1};
        int output;
        while (true){
            if (i%n == 0 && i%2 == 0){
                output = i;
                break;
            }
            else{
                i++;
                continue;
            }
        }
        return output;
    }
};