class Solution {
public:
    int duplicateNumbersXOR(vector<int>& v) {
        int n = v.size();
        unordered_map<int, int> mp;
        for (int i=0; i<n; i++){
            mp[v[i]]++;
        }
        int twice = 0, xorvalue = 0;
        for(auto i:mp){
            if(i.second==2){
                twice++;
                xorvalue^=i.first;
            }
            
        }
        if(twice ==0){
            return 0;
        }
        else{
            return xorvalue;
        }
    }
};