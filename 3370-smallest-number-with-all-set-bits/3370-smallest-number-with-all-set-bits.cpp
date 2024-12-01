class Solution {
public:
    int smallestNumber(int n) {
        int res = 0; 
        while (n>res) res=res*2+1;
        return res; 
    }
};