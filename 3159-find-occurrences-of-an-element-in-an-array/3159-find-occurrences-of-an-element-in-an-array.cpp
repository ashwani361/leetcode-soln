class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& v, vector<int>& q, int x) {
        int n = v.size();
        int m = q.size();
        
        unordered_map<int, vector<int>>mp;
        vector<int>ans;
        
        for(int i=0; i<n; i++){
            mp[v[i]].push_back(i);
        }
        
        for(int i=0; i<m; i++){
            if(q[i]>mp[x].size()){
                ans.push_back(-1);
            }
            else{
                ans.push_back(mp[x][q[i]-1]);
            }
        }
        return ans;
    }
};