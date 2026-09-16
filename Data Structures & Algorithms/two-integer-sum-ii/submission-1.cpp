class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2,0);
        int n = numbers.size();
        // unordered_map<int,int> mp;

        // for(int i = 0;i < n;i++){
        //     int need = target - numbers[i];
        //     if(mp.count(need)){
        //         ans[0] = mp[need]+1;
        //         ans[1] = i+1;
        //     } 

        //     mp[numbers[i]] = i;
        // }

        // return ans;

        int i = 0;
        int j = n-1;

        while(i < j){
            int sum = numbers[i] + numbers[j];
            if(sum == target){
                return {i + 1, j + 1};
            }
            else if(sum > target){
                j--;
            }
            else{
                i++;
            }
        }

        return {};
    }
};
