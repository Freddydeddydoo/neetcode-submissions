class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {


        std::sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for(int i = 0; i < nums.size(); i++){
            int l = i+1;
            int r = nums.size() - 1;
            if(i > 0 && nums[i] == nums[i-1]) continue;;
            while(l < r){
                if(-nums[i] < (nums[l] + nums[r])){
                    r--;
                }else if(-nums[i] > (nums[l] + nums[r])){
                    l++;
                }else{
                    ans.push_back({nums[i], nums[l], nums[r]});

                    l++;
                    r--;
                    
                    while(l < r && nums[r] == nums[r+1]) r--;
                    while(l < r && nums[l] == nums[l-1]) l++;
                }
            }
        }
        
        return ans;
    }
};
