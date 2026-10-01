class Solution {
public:
    int maxArea(vector<int>& heights) {
        int st = 0,end = heights.size()-1;
        int maxwater = 0;
        while(st<=end){
            int ans = (end-st)*min(heights[st],heights[end]);
            maxwater = max(maxwater,ans);
            heights[st]<heights[end] ? st++ : end--;
        }
        return maxwater;
    }
};
