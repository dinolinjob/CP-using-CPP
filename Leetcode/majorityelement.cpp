class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> ma;
        for(int n:nums){
            if(++ma[n] > nums.size()/2){
                return n;
            }
        }
        return 0;
        
    }
};
