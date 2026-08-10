class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> s_set;
        unordered_map<char, int> t_set;

        if(s.size() != t.size()){
            return false;
        }


        for(int i = 0; i < s.size(); i++){

            auto it = s_set.find(s[i]);
            if(it == s_set.end()){
                s_set.insert({s[i],0});
            }
            it = t_set.find(t[i]);
            if(it == t_set.end()){
                t_set.insert({t[i],0});
            }
            t_set[t[i]]++;
            s_set[s[i]]++;
        }
        
        if(t_set == s_set){
            return true;
        }
        
        return false;

    }
};
