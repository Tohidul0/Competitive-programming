class Solution {
public:
    int removeDuplicates(vector<int>& nums) { 
        int k=0;
        for(int i=0;i<nums.size();  i++){
            if(k==1 || k==0 || nums[k-2] != nums[i]){
            nums[k]= nums[i];
           
            k++;
            }
        }
        return k;
        
    }
};