class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> numstk;


        for(int i = 0; i < tokens.size(); i++){
                        
            char target = '-';
            int value;


            if(
                tokens[i] == "+" || 
                tokens[i] == "/" || 
                tokens[i] == "*" || 
                tokens[i] == "-"){
                    int num2 = numstk.back();
                    numstk.pop_back();
                    int num1 = numstk.back();
                    numstk.pop_back();

                    if(tokens[i] == "+"){
                        value = num1 + num2;
                    }else if(tokens[i] == "/"){
                        value = num1 / num2;
                    }else if(tokens[i] == "*"){
                       value = num2 * num1;
                    }else{
                        value = num1 - num2;
                    }
                    numstk.push_back(value);

            }else{
                if(tokens[i].find(target) != string::npos){
                        numstk.push_back(-1 *           stoi(tokens[i].substr(1)));
                        cout << numstk.back() << endl;
                }
                else{
                        numstk.push_back(stoi(tokens[i])); 
                        cout << numstk.back() << endl;
                }
            }
        }

        return numstk.back();
    }
};
