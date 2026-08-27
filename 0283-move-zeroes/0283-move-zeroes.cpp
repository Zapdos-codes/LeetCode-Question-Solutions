class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 0 || nums.size() == 1)return;
        int i = 0 , j = 1;

        while(j<nums.size()){
            if(nums[i] == 0){
                if(nums[j] != 0){
                    swap(nums[i],nums[j]);
                    j++;i++;
                }
                else{
                    j++;
                }
            }
            else{
                if(nums[j] == 0){
                    i++;j++;
                }
                else{
                    j++;
                    i=j;
                }
            }
        }

    }
};