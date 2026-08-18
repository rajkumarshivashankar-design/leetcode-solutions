class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0;int j=people.size()-1;
        sort(people.begin(),people.end());
        int count=0;
        while(i<=j){
            int sum=people[i]+people[j];
            if(sum<=limit){count++;i++;j--;}
            else if(sum>limit){count++;j--;}
            else {
                count++;i++;
            }
        }
            return count;
        
    }
};