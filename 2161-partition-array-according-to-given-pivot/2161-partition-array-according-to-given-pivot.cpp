class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int size = nums.size();
        vector<int> temp;

        for(int i=0; i<size; i++){
            if(nums[i] < pivot){
                temp.push_back(nums[i]);
            }
        }
        for(int i=0; i<size; i++){
            if(nums[i] == pivot){
                temp.push_back(nums[i]);
            }
        }
        for(int i=0; i<size; i++){
            if(nums[i] > pivot){
                temp.push_back(nums[i]);
            }
        }
        return temp;


    }
};