class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> values;
        vector<int> ret;

        for(int i = 0; i < nums.size(); i++){
            //check if difference exists in thing:
            int diff = target - nums[i];

            if(values.find(diff) != values.end()){
                ret = {values[diff], i};
                break;
            }
            values[nums[i]] = i;
        }
        return ret;
    }
};
