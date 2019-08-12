class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ma = INT_MIN,cn=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cn++;
            }
            else{
                ma = max(ma,cn);
                cn=0;
            }
            ma = max(ma,cn);
        }
        return ma;
    }
};
