class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        vector<int> ans(2);

        
        while(l < r){
            int currSum = numbers[l] + numbers[r];
            
            if(currSum > target){
                r--;
                continue;
            }

            if(currSum < target){
                l++;
                continue;
            }

            if(currSum == target){
                ans[0] = l + 1;
                ans[1] = r + 1;
                break;
            }
        }


        return ans;
    }
};
