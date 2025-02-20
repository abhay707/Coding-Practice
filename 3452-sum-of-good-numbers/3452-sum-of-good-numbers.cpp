class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int no = nums.size();
        int sum = 0;

        for(int i = 0;i<no;i++){
            bool isGoodNum = true;

            if(i-k >=0 && nums[i] <= nums[i-k]){
                isGoodNum = false;
            }

            if(i + k < no && nums[i] <= nums[i+k]){
                isGoodNum = false;
            }
            if(isGoodNum){
                sum +=nums[i];
            }
        }
        return sum;
    }
};