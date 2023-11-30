class Solution {
public:
    bool canJump(vector<int>& nums) {
        if (nums.size() == 1 ) return true;
        else{
        int jump=nums[0];
        for(int i=0; i<nums.size(); i++){
            int jump0= i + nums[i];
            if(jump<jump0) jump=jump0;

            if(i==nums.size() -1) return true;
            
            if(jump >= nums.size()-1) return true;
            if(jump<=i)
            return false;
        }
        return true;
        }
        
    }
};