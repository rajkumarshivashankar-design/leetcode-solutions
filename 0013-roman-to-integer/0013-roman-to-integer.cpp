class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> f;
        f['I']=1;
        f['V']=5;
        f['X']=10;
        f['L']=50;
        f['C']=100;
        f['D']=500;
        f['M']=1000;
      int sum=0; 
        for(int i=s.size()-1;i>=0;i--){
            if(i-1>=0 && f[s[i]]>f[s[i-1]]){
                int num=f[s[i]]-f[s[i-1]];
                sum+=num;
                i--;
                
            }else sum+=f[s[i]];
        }return sum;
    }
};