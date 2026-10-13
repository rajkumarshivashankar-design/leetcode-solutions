class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        if(n==1)return 1;
        sort(points.begin(),points.end());
        int f1=points[0][0];
        int e1=points[0][1];
        int i=1;int count=1;//u need minimum 1 arrow to shoot
        while(i<n){
            int f2=points[i][0];
            int e2=points[i][1];
            if(e1>=f2){
                //intervals overlap dont increase count
                f2=f1;
                e2=min(e1,e2);
            }
            else{count++; }
            
            f1=f2;
                e1=e2;
                 i++;
               
               

            
        }return count;
    }
};