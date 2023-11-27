class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = s.size()-1;
        int g=0, m=0;
        for(l ; l>=0; l--){
            if(s[l] != ' ')
            m++;
            else{
                if(m>0)
                break;
            }
        }
        
        return m;
    }
};