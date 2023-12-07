class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        ans.empty();
        for(int i=0 ;i<s.size(); i++){
            if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<=57){
                if(s[i]>=65 && s[i]<=90)
                s[i] = s[i]+32;
                ans.push_back(s[i]);
            }
        }
        int n= ans.size() / 2;
        int j= ans.size()-1;
        for(int i=0 ;i<=n-1;i++){
            if(ans[i]!= ans[j]) return false;
            j--;
        }
        return true;
    }
};