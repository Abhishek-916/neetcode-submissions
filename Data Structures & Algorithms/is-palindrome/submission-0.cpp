class Solution {
public:
    bool isPalindrome(string s) {
        string d="";
        for(int i=0;i<s.size();i++){
            if(('A'<=s[i]&&s[i]<='Z')||('a'<=s[i]&&s[i]<='z')||('0'<=s[i]&&s[i]<='9')){
                d+=tolower(s[i]);
            }
        }
        string f=d;
        reverse(d.begin(),d.end());
        return f==d;

        
    }
};