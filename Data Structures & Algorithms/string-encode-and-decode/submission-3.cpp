class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_str = "";
        for(auto x : strs){
            encoded_str += to_string(x.size());
            encoded_str += '#';
            encoded_str += x;
        }
        return encoded_str;
    }

    vector<string> decode(string s) {
        vector<string> decoded_str;

        int i = 0;
        while(i < s.size()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }

            int len = stoi(s.substr(i,j-i));

            j++;

            string w = s.substr(j,len);
            decoded_str.push_back(w);

            i = j + len;

        }

        return decoded_str;
    }
};
