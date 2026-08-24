class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        std::map<int, int> freq; // num, #of times it appears
        std::vector<vector<int>> bucket(nums.size() + 1); 

        vector<int> elements;

        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]] ++;
        }

        for(auto& f: freq){
            bucket[f.second].push_back(f.first); 
        }

        for(int i = nums.size(); i >= 0; i--){
            if(bucket[i].empty()) continue;

            while(k > 0){
                if(bucket[i].empty()) break;
                elements.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
        }

        return elements;
    }
};
