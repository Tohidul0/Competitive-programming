class Solution {
public:
    double myPow(double x, int n) {
        int b=abs(n);
        double ans = 1, a=x;
        while(b>0){
          if(b%2 != 0){
              ans= ans*a;
          }
          
          b=b/2;
          a=a*a;
        }
        if(n<0){
            ans= (1/ans);
        }
        return ans;
    }
};