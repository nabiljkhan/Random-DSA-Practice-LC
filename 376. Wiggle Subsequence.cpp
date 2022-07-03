class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return n ;
        int p_d = nums[1] - nums[0];
        int ans = 0;
        
        if(p_d) ans =2;
        else ans = 1;
        for(int i = 2 ; i < n ; i++){
            int c_d = nums[i] - nums[i-1];
            
            if((p_d<=0 and c_d>0) or (p_d>=0 and c_d<0)){
                ans++;
                p_d = c_d;
            }
        }
        return ans;
    }
};

/* https://leetcode.com/problems/wiggle-subsequence/ */