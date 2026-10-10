class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int water=0;
        vector<int>leftmax(n),rightmax(n);
        int maxleft=height[0];
        int maxright=height[n-1];
        for(int i=0;i<n;i++){
           maxleft=max(height[i],maxleft);
           leftmax[i]=maxleft;
        }
        for(int i=n-1;i>=0;i--){
           maxright=max(height[i],maxright);
           rightmax[i]=maxright;
        }
        for(int i=0;i<n;i++){
            

            water+=min(leftmax[i],rightmax[i])-height[i];
        }
        return water;
    }
};