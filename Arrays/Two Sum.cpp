//Easy - 1. Easy Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int idx = 0;
        int n1 = nums[idx];
        bool chk = 0;
        while(chk!=1){
            for(int i=0;i<nums.size() && i!= idx;i++){
                if(nums[i] + nums[idx] == target){
                    ans.push_back(idx);
                    ans.push_back(i);
                    chk = 1;
                    break;
                }
            }idx++;
        }
        return ans;
    }
};
