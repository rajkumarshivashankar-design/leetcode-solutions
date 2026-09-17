class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>pal;
        for(int i=0;i<s.size();i++){
            if(!isalnum(s[i]))continue;
            else pal.push_back(tolower(s[i]));
        }
        vector<char>copy=pal;
        reverse(copy.begin(),copy.end());
        if(pal==copy)return true;
        return false;
        
    }
};