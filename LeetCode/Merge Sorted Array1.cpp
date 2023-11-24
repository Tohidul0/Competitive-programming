class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p = m-1, q = n-1, index = m+n-1;
        if(m==0 && n==1) nums1[m] = nums2[0];
        else{
             while(index >= 0 && q >= 0){
                 if(p<0 && q>=0){
                     nums1[index] = nums2[q];
                     q--;
                 }
                 else if(nums1[p]>nums2[q]){
                     nums1[index]= nums1[p];
                     nums1[p]=nums2[q];
                     p--;
                 }
                 else{
                     nums1[index]= nums2[q];
                     q--;
                 }
                 index--;
                 

        }

        }
       
    
    }
};