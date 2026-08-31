class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return 0;
        vector<int> lsum(n,0), rsum(n,0);
        int sum = 0;
        for(int i= 1; i < n ; i++){
            sum += nums[i-1];
            lsum[i] = sum ;
        }
        sum = 0;
        for(int i = n-2; i>=0 ; i--){
            sum += nums[i+1];
            rsum[i] = sum;
        }

        for(int i = 0 ; i < n; i++){
            if(lsum[i] == rsum[i]){
                return i;
            }
        }

        return -1;

    }
};