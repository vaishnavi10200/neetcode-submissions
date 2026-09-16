class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> st;

        for(auto x : nums){
            st.insert(x);
        }
        
        for(auto i : st){

            if(!st.count(i-1)){
                int cnt = 1;
                int curr = i;

                while(st.count(curr+1)){
                    cnt++;
                    curr++;
                }

                ans = max(cnt,ans);
            }
        }

        return ans;
    }
};
