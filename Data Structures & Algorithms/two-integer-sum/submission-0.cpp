class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> values;

        for(int i = 0; i < nums.size(); i++){
            //check if difference exists in thing:
            int diff = target - nums[i];

            if(values.find(diff) != values.end()){
                vector<int> ret = {values[diff], i};
                return ret;
            }
            values[nums[i]] = i;
        }

    }
};
