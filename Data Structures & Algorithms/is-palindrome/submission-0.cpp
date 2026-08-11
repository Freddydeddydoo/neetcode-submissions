class Solution {
public:
    bool isPalindrome(string s) {

        //preproccessing
        s.erase(
            std::remove_if(s.begin(), s.end(), [](unsigned char c) {
                return !isalnum(c);
            }),
            s.end()
        );

        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }

        int l = 0;
        int r = s.size() - 1;

        while(l < r){
            if(s[l] != s[r]) {
                cout << r  << ", " << s[r] << endl;
                cout << l  << ", " << s[l] << endl;
                return false;
                }
            l++;
            r--;
        }

        return true;

        
    }
};
