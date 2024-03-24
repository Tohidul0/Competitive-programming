class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = nums[0];
        for(int i=1;i<nums.size();){
            if(ans==nums[i] && i<nums.size()){
                return true;
            }
            else{
                ans=nums[i];
                i++;
            }
        }
        return false;
    }
};