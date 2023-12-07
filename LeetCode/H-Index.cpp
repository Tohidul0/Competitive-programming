class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n=citations.size();
         if(n==1 && citations[0]==0) return 0;
        if(n==1 && citations[0]!=0) return 1;
        int k=0, ans, m=0;
        for(int i =1 ; i<n+1 ; i++){

            for(int j=0; j<n; j++){
                if(citations[j]>=i)
                k++;
            }
            if(k>=i){
            ans=i;
            m++;
            }
            k=0;
        }
        if(m==0) return 0;
        return ans;
        
    }
};