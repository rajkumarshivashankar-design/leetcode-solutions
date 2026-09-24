class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)return true;
        for(int i=0;i<n/2;i++){
            if(pow(4,i)>n)return false;

            else if(pow(4,i)==n)return true;

        }return false;
    }
};