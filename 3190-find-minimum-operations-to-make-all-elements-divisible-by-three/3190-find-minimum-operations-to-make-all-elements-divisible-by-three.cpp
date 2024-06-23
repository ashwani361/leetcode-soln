class Solution {
public:
    int minimumOperations(vector<int>& v) {
        int n = v.size();
        int c = 0;
        for(int i = 0; i<n; i++){
            int r = v[i]%3;
            c+=min(r, 1);
        }
        return c;
    }
};