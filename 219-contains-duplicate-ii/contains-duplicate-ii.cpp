class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        /* //Solution using Hash Maps
        
        unordered_map<int,int>checked;
        for(int i=0; i<nums.size(); i++){
            if(checked.count(nums[i]) && i-checked[nums[i]]<=k){
                return true;
            }
            checked[nums[i]]=i;
        }
        return false;*/

        // Solution using Hash Sets and Sliding Window
        
        unordered_set<int>slidWin;
        for(int i=0; i<nums.size(); i++){
            if(i>k) slidWin.erase(nums[i-k-1]);
            if(slidWin.count(nums[i])) return true;
            slidWin.insert(nums[i]);
        }
        return false;
    }
};