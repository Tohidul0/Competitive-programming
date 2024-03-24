class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map <int, int> mp;
        for(int i=0; i<arr.size() ; i++){
            mp[arr[i]]++;
        }
        set <int> ans;
        for(auto i:mp){
            ans.insert(i.second);
        }
        if(mp.size() == ans.size()) return true;
        else return false;
    }
};