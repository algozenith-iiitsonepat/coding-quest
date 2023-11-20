class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int result = 0;
        int curMin = nums[0];
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != curMin){
                result += nums.size() - i;
                curMin = nums[i];
            }
        }

        return result;
    }
};