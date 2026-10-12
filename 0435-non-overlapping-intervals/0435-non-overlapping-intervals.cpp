class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),[](auto &a,auto &b){
              return a[1]<b[1];
        });
        int count=0;
        int f1=intervals[0][0];
        int e1=intervals[0][1];
        for(int i=1;i<n;i++){
            int f2=intervals[i][0];
            int e2=intervals[i][1];
            if(e1>f2)//overlap
            {count++;
            e1=min(e1,e2);
            }
            else{
                e1=e2;
                f1=f2;
            }
        }return count;
    }
};