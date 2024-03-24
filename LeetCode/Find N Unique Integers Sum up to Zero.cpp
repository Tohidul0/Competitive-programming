class Solution {
public:
    vector<int> sumZero(int n) {
        vector <int> ans;
        if(n%2!=0){
            ans.push_back(0);
        for(int i=1; i<=n/2 ; i++){
             ans.push_back(i);
        }
        for(int i=n/2+1, j=1; i<n ; i++,j++){
             ans.push_back(-j);
        }
        }
        else{
           for(int i=0, j=1; i<n/2 ; i++,j++){
             ans.push_back(j);
        }
        for(int i=n/2, j=1; i<n ; i++,j++){
             ans.push_back(-j);
        } 
        }
        return ans;
    }
};