class Solution {
public:

    string encode(vector<string>& strs) {
        
        string encoded;

        for(auto& s: strs){
            encoded.append(s);
            encoded.append("~");
        }


        return encoded;
    }

    vector<string> decode(string s) {

        vector<string> decoded;
        int current_start = 0;
        
        for(int i = 0; i < s.length(); i++){

            if(s[i] == '~'){
                decoded.push_back(s.substr(current_start, i - current_start));
                current_start = i + 1;
            }
        }

        return decoded;
    }
};
