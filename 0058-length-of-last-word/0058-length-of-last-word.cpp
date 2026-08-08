class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();int count=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ')continue;
            else{
                int idx=i;
                while(idx>=0 && s[idx]!=' ' ){
                    count++;
                    idx--;
                    
                }
                
                break;
            }
        }return count;
    }
};