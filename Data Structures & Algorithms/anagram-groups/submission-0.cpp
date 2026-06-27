class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(auto i :strs){
            string it=i;
            sort(it.begin(),it.end());
            mp[it].push_back(i);

        }
         vector<vector<string>>ans;
         for(auto it:mp){
           ans.push_back(it.second);
         }
         return ans;
        
    }
};
