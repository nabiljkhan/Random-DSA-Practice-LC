class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max_streak=0;
        unordered_set<int>s(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(s.find(nums[i]-1)==s.end())
            {
                int cur = nums[i];
                int streak=1;
                while(s.find(cur+1)!=s.end())
                {
                    cur+=1;
                    streak++;
                }
                max_streak = max(max_streak,streak);
            }
        }
        return max_streak;
    }
};

/*  https://leetcode.com/problems/longest-consecutive-sequence/ */