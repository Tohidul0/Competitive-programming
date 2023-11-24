class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int a=nums.size();
        vector<int> vac;
        for(int i=0;i<a;i++){
            for(int j=i+1;j<a;j++){
                if(nums[i]+nums[j]==target){
                   vac.push_back(i);
                   vac.push_back(j);
                   return vac;
                    break;
                }
            }
        }
        return vac;
    }
        
};