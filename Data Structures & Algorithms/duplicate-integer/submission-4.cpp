class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> values;

        for(int i = 0; i < nums.size(); i++){
            auto it = values.find(nums[i]);
            if(it != values.end()){
                return true;
            }
            values.insert(nums[i]);
        }
        return false;
    }
};