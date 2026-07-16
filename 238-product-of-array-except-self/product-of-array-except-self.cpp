class Solution {
public:
    /*
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size());
        int pre = 1; int post = 1;
        for(int i=0; i<nums.size(); i++){
            answer[i]=pre;
            pre=pre*nums[i];
        }
        for (int j=nums.size()-1; j>=0; j--){
            answer[j]=post*answer[j];
            post=post*nums[j];
        }
        return answer;
    }
    */
    
    //Another method
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size(),1);
        int pre = 1; int post = 1;
        for(int i=1; i<nums.size(); i++){
            answer[i]=answer[i-1]*nums[i-1];
        }
        for (int j=nums.size()-1; j>=0; j--){
            answer[j]=post*answer[j];
            post=post*nums[j];
        }
        return answer;
    }
};