class Solution {
public:
    int numberOfPairs(vector<int>& v, vector<int>& w, int k) {
        int n = v.size(), m = w.size();
        int ans = 0;
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(v[i]%(w[j]*k) == 0){
                    ans++;
                }
            }
        }
        
        return ans;
    }
};