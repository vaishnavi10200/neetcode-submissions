class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n;i++){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }

            int j = n-1;
            int k = i+1;

            while(k < j){
                if(nums[i]+nums[j]+nums[k] == 0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    k++;
                    j--;

                    while(k < j && nums[k] == nums[k - 1])
                        k++;

                    // Skip duplicate j values
                    while(k < j && nums[j] == nums[j + 1])
                        j--;
                }
                else if(nums[i]+nums[j]+nums[k] < 0){
                    k++;
                }
                else{
                    j--;
                }
            }

        }
        return ans;
    }
};
