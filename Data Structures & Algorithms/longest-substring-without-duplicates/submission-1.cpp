class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int i=0;
        int maxi=0;
        for(int j=0;j<s.size();j++){
            if(mp.count(s[j])){
                while(mp[s[j]]!=0){
                mp[s[i]]--;
                i++;
                }

            }
            maxi=max(maxi,j-i+1);
            mp[s[j]]++;
            

        }
        return maxi;
        
    }
};
