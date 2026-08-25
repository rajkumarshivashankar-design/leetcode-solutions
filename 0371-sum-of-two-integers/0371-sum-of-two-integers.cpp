class Solution {
public:
    int getSum(int a, int b) {
     int carry=INT_MAX;int sum=0;
      while(carry!=0){
        sum=a^b;
       carry=(a&b)<<1;
       a=sum;
       b=carry;
      }return a;
    }
};



//   Algorithm:
// XOR a and b → gives sum without carry.
// AND a and b, then left shift → gives the carry.
// Repeat steps 1–2 until carry becomes 0.
// Return the sum.

// Remember:
// XOR → sum
// AND + <<1 → carry
// Repeat until carry = 0