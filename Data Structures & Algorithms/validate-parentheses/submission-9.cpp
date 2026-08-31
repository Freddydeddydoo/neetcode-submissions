class Solution {
public:
    bool isValid(string s) {

        //OPTIMIZED SOLUTION
        vector<char> stk;
        unordered_map<char, char> match;

        match['}'] = '{';
        match[')'] = '(';
        match[']'] = '[';

        for(char c: s){
            if(c == '(' || c == '{' || c == '['){
                stk.push_back(c);
            }else{
                if(stk.empty() || match[c] != stk.back()) return false;
                stk.pop_back();
            }
        }
        return stk.empty();
    }
};
