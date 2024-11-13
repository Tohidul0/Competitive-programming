class Solution {
public:
     bool matchvalue(char a, char b){
        if(a == '(' && b == ')'   || a == '{' && b == '}' || a == '[' && b == ']')
        return true;
        else
        return false;
       }
    bool isValid(string s) {
      
        int m = 0;
        stack<char> st;
        for(int i=0 ;i< s.size() ; i++){
            if(s[i] == '('  || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else{
                    if(matchvalue(st.top(), s[i])){
                        st.pop();
                    }
                    else
                    return false;
                }
            }
        }
        if(st.empty())
        return true;
        else return false;
       
    }
};