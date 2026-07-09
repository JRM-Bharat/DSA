class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>checked;
        for(int i=0; i<nums.size(); i++){
            if(checked.count(nums[i]) && i-checked[nums[i]]<=k){
                return true;
            }
            checked[nums[i]]=i;
        }
        return false;
    }
};