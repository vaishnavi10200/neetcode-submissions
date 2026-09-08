class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        vector<int> ans;

        for(auto x : nums){
            mp[x]++;
        }

        vector<pair<int,int>> fre(mp.begin(),mp.end());

        sort(fre.begin(), fre.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        for(int i = 0;i<k;i++){
            ans.push_back(fre[i].first);
        }

        return ans;

    }
};
