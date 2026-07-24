class Solution {
public:
unordered_map <char,string> f = {
{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"},
{'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}
};
   // helper
    void solve(string  &digits,string diary,vector<string>& res,int idx,int n){
        if(idx==n){
            res.push_back(diary);
            return;
        }
        string choices=f[digits[idx]];
        for(int i=0;i<choices.size();i++){
            diary.push_back(choices[i]);
            solve(digits,diary,res,idx+1,n);
            diary.pop_back();
        }
        
    }
    vector<string> letterCombinations(string digits) {
        string diary="";
        int n=digits.size();
        vector<string>res;int idx=0;
        solve(digits,diary,res,idx,n);
        return res;
    }
};