class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> values;
        vector<int> ret;

        for(int i = 0; i < nums.size(); i ++){
            auto it = values.find(nums[i]);
            if(it != values.end()){
                ret.push_back(it->second);
                ret.push_back(i);
                break;
            }
            values[target - nums[i]] = i;
        }
        return ret;
    }
};
