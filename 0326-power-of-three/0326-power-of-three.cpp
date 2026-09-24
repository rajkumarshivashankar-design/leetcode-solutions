class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1)return true;
        if(n==3)return true;
        for(int i=0;i<n/2;i++){
            if(pow(3,i)>n)return false;

            else if(pow(3,i)==n)return true;

        }return false;
    }
};