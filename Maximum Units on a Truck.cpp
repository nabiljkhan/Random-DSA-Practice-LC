class Solution {
public:
    bool static compf(vector<int> &a , vector<int> &b) {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin() , boxTypes.end() , compf);
        int res =0;
        for(int i = 0 ; i<boxTypes.size() ; i++){
            int box_cnt = min(truckSize , boxTypes[i][0]);
            res += box_cnt*boxTypes[i][1];
            truckSize-=box_cnt;
            if(!truckSize) break;
        }
        return res;
    }
};

  /*link : https://leetcode.com/problems/maximum-units-on-a-truck/   */