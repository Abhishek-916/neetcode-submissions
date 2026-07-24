class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n<m){
            return {""};
        }
        vector<int>a(128,0);
        for(int i=0;i<m;i++){
            a[t[i]]++;
        }
        int j=0;
        int total = m;
        int start=-1;
        
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            if(a[s[i]]>0){
                total--;
            }
            a[s[i]]--;
            while(total<=0&&j<n){
                a[s[j]]++;
                if( a[s[j]]>0){
                    total++;
                  if(i-j+1<mini){
                    mini=i-j+1;
                    start=j;
                  }
                }
                j++;

            }



        }
       return mini == INT_MAX ? "" : s.substr(start, mini);
        
    }
};
