class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<int, vector<string>> retString;
        vector<vector<string>> r;
        
        for(int i = 0; i < strs.size(); i++){
            string currString = strs[i];
            vector<int> foundkey(26); 
            int key = 0;

            for(int i = 0; i < currString.size(); i++){
                foundkey[currString[i] - 'a']++;
            }

            for (int d : foundkey) {
                key = key * 10 + d;
            }
            retString[key].push_back(currString);
        }

        for(const auto& [key, value]:  retString){  
            r.push_back(value);
        }
        return r;
    }
};
