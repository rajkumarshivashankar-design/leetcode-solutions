class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> f;
        for(int i=0;i<s.size();i++){
            f[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(f.find(t[i])!=f.end())f[t[i]]--;
            else f[t[i]]++;
        }
        for(auto i :f){
            if(i.second!=0) return i.first;
        }
        return '\0';
    }
};