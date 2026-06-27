class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pro=1;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){

            pro*=nums[i];}
            if(nums[i]==0){
                cnt++;
            }
        }
        vector<int>ans(nums.size(),0);
        if(cnt>1){
            return ans;

        }
        if(cnt==1){
            for(int i=0;i<nums.size();i++){
            
            if(nums[i]==0){
                ans[i]=pro;
            }
        }

        }
        else{
   
    for(int i=0;i<nums.size();i++){
    

        ans[i]=pro/nums[i];
    }
        }
    return ans;


    }
};
