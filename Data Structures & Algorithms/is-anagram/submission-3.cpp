class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> seen_s;
        unordered_map<char, int> seen_t;
        if(s.size() != t.size()){
            return false;
        }
        for(int i = 0; i < s.size(); i++){
            if(seen_s.count(s[i])){
                seen_s[s[i]] ++;
            }else{
                seen_s[s[i]] = 0;
            }
            if(seen_t.count(t[i])){
                seen_t[t[i]] ++;
            }else{
                seen_t[t[i]] = 0;
            }
        }

        for(int i = 0; i < s.size(); i++){
            if(seen_s.find(t[i]) == seen_s.end()){
                return false;
            }
            if(seen_t.find(s[i]) == seen_t.end()){
                return false;
            }
            
            if(seen_s[s[i]] != seen_t[s[i]]){
                return false;
            }
            
        }

        return true;
    }
};
