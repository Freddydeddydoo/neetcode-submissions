class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> lettersS;
        unordered_map<char, int> lettersT;
        if(s.size() != t.size()){
            return false;
        }

        for(int i = 0; i < s.size(); i ++){
            lettersS[s[i]]++;
            lettersT[t[i]]++;
        }

        return lettersS == lettersT;
    }
};
