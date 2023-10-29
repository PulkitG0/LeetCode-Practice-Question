class Solution {
private:
    void helper(vector<int>& nums, unordered_map<int,int>& mp, vector<vector<int>>& ans, vector<int>& v){

        if(v.size() == nums.size()){
            ans.push_back(v);
            return;
        }


        for(int i=0 ; i<nums.size() ; i++){
            if(mp.count(nums[i]) > 0) continue;
            mp[nums[i]]++;
            v.push_back(nums[i]);
            helper(nums, mp, ans, v);
            v.pop_back();
            mp.erase(nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<vector<int>> ans;
        vector<int> v;
        helper(nums, mp, ans, v);
        return ans;
    }
};
