class Solution {
public:

    string encode(vector<string>& strs) {
        
        string encoded;

        for(auto& s: strs){
            encoded.append(to_string(s.size()));
            encoded.append("#");
            encoded.append(s);

        }

        cout << encoded << endl;

        return encoded;
    }

    vector<string> decode(string s) {

        unordered_set<char> nbers;
        nbers.insert('0');
        nbers.insert('1');
        nbers.insert('2');
        nbers.insert('3');
        nbers.insert('4');
        nbers.insert('5');
        nbers.insert('6');
        nbers.insert('7');
        nbers.insert('9');
        nbers.insert('8');

        vector<string> decoded;
        int current_start = 0;
        string num;
        for(int i = 0; i < s.length(); i++){

            if(nbers.contains(s[i])){
                num.push_back(s[i]);
            }
            if(s[i] == '#'){
                decoded.push_back(s.substr(i+1,stoi(num)));
                i+= stoi(num);
                num.clear();
            }
        }



        return decoded;
    }
};
