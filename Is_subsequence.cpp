class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int b = t.size();
        int i = 0,j =0;
        vector<int>ans;
        while(i<n && j<b){
            if(s[i] == t[j]){
                ans.push_back(s[i]);
                i++,j++;
            }
            else if(s[i] != t[j])
            j++;
        }
        if(ans.size() == s.size())
        return true;
        else 
        return false;
    }
};
