class Solution {
public:
    int jump(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return 0;
        int cureent=0, jump=0, des=0;
        for(int i=0; i< n-1; i++){
           des= max(des, nums[i]+i);
           if(cureent==i){
               cureent=des;
               jump++;
           }
        }
        return jump;
        
    }
};