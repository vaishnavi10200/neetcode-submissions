class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        for(auto x : s){
            mp[x]++;
        }

        for(auto y : t){
            mp[y]--;
        }

        for(auto i : mp){
            if(i.second != 0){
                return false;
            }
        }
        return true;
    }
};
