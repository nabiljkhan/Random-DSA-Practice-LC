class Solution {
public:
    int candy(vector<int>& ratings) {
        int ans = 0;
        int n = ratings.size();
        vector<int>start(n, 1);
        vector<int>end(n, 1);

        for(int i = 1; i < n; i++) {
             if(ratings[i] > ratings[i-1]) start[i] = start[i-1]+1;
        }
           
        for(int i = n-2; i >= 0; i--) {
             if(ratings[i] > ratings[i+1]) end[i] = end[i+1]+1;
        }
           
        
        for(int i = 0; i < n; i++){
            ans += max(start[i], end[i]);
        }
            
        return ans;            
    }
};

/* https://leetcode.com/problems/candy/ */