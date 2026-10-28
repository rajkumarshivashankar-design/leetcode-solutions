class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack <int>st;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
            if(asteroids[i]>0){
                st.push(asteroids[i]);
                
            }
            else{
            while(!st.empty() && st.top()>0 && abs(asteroids[i])>st.top()){//asteroid on top of stack already passed so pop
                st.pop();
                
            }
            if(!st.empty() && st.top()==abs(asteroids[i]))st.pop();
            else if(st.empty() || st.top()<0)st.push(asteroids[i]);
            }
        }
        vector<int>res;
        while(!st.empty()){
            int ans=st.top();st.pop();
            res.push_back(ans);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};