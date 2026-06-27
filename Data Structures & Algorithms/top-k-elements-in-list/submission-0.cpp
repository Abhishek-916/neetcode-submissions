class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int n = nums.size();
        for(auto it :nums){
            mp[it]++;
        }
        vector<pair<int,int>>ans;
        for(auto [a,b]:mp){
            ans.push_back({a,b});
            
        }
        if(ans.size()==1){
            return {ans[0].first};
        }
        sort(ans.begin(),ans.end(),[](pair<int,int>a,pair<int,int>b){
            return a.second>b.second;
        });
        vector<int>b;
        int i=k;
        for(auto it:ans){
            if(i>0){
                b.push_back(it.first);
            }
            i--;
        }
        return b;

        
    }
};