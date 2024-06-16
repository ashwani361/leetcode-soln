class Solution {
public:
    int countCompleteDayPairs(vector<int>& v) {
        int n = v.size();
        int count = 0;
        
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                int t = v[i]+v[j];
                if(t%24==0){
                    count++;
                }
            }
        }
        return count;
    }
};