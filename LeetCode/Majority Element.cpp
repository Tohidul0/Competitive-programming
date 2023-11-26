class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int j=0;
        int k=0;
        for( int i=0 ; i< nums.size() ; i++){
         if(j==0){
             k= nums[i];
         }
         if(nums[i] == k) j++;
         else j--;
        
        }
     return k;
        
    }
    
};