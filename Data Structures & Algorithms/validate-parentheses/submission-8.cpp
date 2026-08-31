class Solution {
public:
    bool isValid(string s) {

        vector<char> stk;

        for(int i = 0; i < s.length(); i++){

            if(s[i] == '{' || s[i] == '[' || s[i] == '('){
                stk.push_back(s[i]);
            }else if(s[i] == '}' || s[i] == ')' || s[i] == ']'){
                if(stk.empty()) return false;
                if(stk.back() == '{' && s[i] != '}' ) return false ;
                else if(stk.back() == '[' && s[i] != ']') return false;
                else if(stk.back() == '(' && s[i] != ')') return false;
                else stk.pop_back();
            }
        }
        return stk.empty();
    }
};
