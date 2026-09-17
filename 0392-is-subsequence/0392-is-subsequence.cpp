class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int i=0,j=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;j++;
            }
            else if(s[i]!=t[j])j++;
        }
        if(i==s.size())//all elements are present
        return true;
        else return false;
    }
};