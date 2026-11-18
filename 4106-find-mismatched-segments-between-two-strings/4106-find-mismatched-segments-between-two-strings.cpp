class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>>res;
        if(s1.size()!=s2.size())return {};
        int n=s1.size();
        int i=0; vector<string>temp (2,"");
        while(i<n){
            if(s1[i]==s2[i]){
             if(temp[0]!="" && temp[1]!=""){ 
                res.push_back(temp);
                temp[0]="";
                temp[1]="";
                i++;
             }
             else i++;
            } 
            else {
            temp[0]+=s1[i];
            temp[1]+=s2[i];
            i++;
            }
            
        }if(temp[0]!="" && temp[1]!="")res.push_back(temp);
        return res;
    }
};