class Solution {
public:
    void rotateHelper(vector<int>& nums, int i, int j) {
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        if(nums.size() == 1 || nums.size() == 0 )return;
        k = k%nums.size();
        rotateHelper(nums,0,nums.size()-1);
        rotateHelper(nums,0,k-1);
        rotateHelper(nums,k,nums.size()-1);
    }
};