class Solution {
public:
    bool ispossible(int b,int h,const vector<int>& nums){
        long long time = 0;
        for(int i = 0; i < nums.size();i++){
            time += (1LL * nums[i] + b - 1)/b;
        }
        if(time <= h) return true;
        else return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int st = 1,end = *max_element(piles.begin(),piles.end());
        int k = 0;
        while(st<=end){
            int mid  = st + (end-st)/2;
            if(ispossible(mid,h,piles)){
                k = mid;
                end = mid-1;
            }else st = mid+1;
        }
        return k;
    }
};
