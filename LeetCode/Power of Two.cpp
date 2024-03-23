class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans;
        if(n==1) return true;
        if(n%2!=0 || n==0 || n<0) return false;

        while(n>0){
            ans = n/2;
            if(ans==1) return true;
            if(ans%2!=0) return false;
            n=n/2;
        }
        return true;
    }
};