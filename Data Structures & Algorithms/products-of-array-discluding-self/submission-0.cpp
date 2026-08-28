class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> leftProduct(nums.size(),0);
        vector<int> rightProduct(nums.size(),0);
        vector<int> ans(nums.size(), 0);

        if(nums.size() <= 1){
            return ans;
        }

        leftProduct[0] = nums[0];
        for(int i = 1; i < nums.size(); i++){
            leftProduct[i] = nums[i] * leftProduct[i-1];
        }



        rightProduct[nums.size() - 1] = nums.back();
        for(int i = nums.size() -2; i >= 0; i--){
            rightProduct[i] = nums[i] * rightProduct[i+1];
        }


        ans[0] = rightProduct[1];
        ans[nums.size()-1] = leftProduct[nums.size() - 2];
        for(int i = 1; i < nums.size() - 1; i++){
            ans[i] = leftProduct[i-1] * rightProduct[i+1];

        }

        return ans;

    }
};
