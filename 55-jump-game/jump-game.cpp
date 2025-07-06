class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach=0;
        for(int pos=0;pos<nums.size();pos++){
            if(maxReach< pos) 
            return false;
            maxReach=max(maxReach,nums[pos] +pos);    
        }
        return true;
        
    }
};