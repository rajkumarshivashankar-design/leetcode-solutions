class Solution {
public:
    //Greedy
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        int five=0,ten=0,twenty=0;
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                five++;
                continue;
            }
            else if(bills[i]==10){
                if(five==0)return false;
                else{
                    ten++;
                    five--;
                }
            }
            else if(bills[i]==20){
                if(ten==0){
                    if(five>=3)five=five-3;
                    else return false;
                }
                else{
                    if(five==0)return false;
                    ten--;five--;twenty++;
                }
            }
            
        }return true;
    }
};