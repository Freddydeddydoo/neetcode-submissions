class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_map<int, int> seq; //value, #in sequence

        for(int i: nums){
            seq[i] = 0;
        }

        for(int i = 0; i < nums.size(); i++){
            if(seq.find(nums[i] - 1) != seq.end()) continue;
            if(seq[nums[i]] > 0) continue;
            
            int current_num = nums[i];
            while(seq.find(current_num) != seq.end()){
                seq[nums[i]]++;
                current_num = current_num + 1;
            }
        }


        if (seq.empty()) return 0;

        auto max_it = std::max_element(
            seq.begin(), 
            seq.end(),
            [](const auto& p1, const auto& p2) {
                return p1.second < p2.second; 
            }
        );

        return max_it->second;
    }
};
