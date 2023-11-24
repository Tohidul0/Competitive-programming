class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string d=s;
        reverse(d.begin(),d.end());
        if(s==d) return true;
        else return false;
        
    }
};