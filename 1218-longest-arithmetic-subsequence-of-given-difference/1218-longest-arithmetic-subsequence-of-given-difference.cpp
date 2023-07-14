class Solution {
public:
    int longestSubsequence(vector<int>& v, int d) 
    {
        unordered_map<int, int>mp;
        int ans = 0;
        
        for(auto i:v){
            mp[i] = 1 + mp[i-d];
            ans = max(ans, mp[i]);
        }
        
        return ans;
    }
};