class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int chk=0, ans=0;
        vector<int>v(51, 0);
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<=k) {
                if(v[nums[i]]==0) chk++;
                v[nums[i]]++;
            }
            if(chk==k) {
                ans++;
                break;
            }
            ans++;
        }
        return ans;
    }
};
