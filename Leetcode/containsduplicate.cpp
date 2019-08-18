class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> myset;
        for(int i:nums){
            myset.insert(i);
        }
        if(myset.size()!=nums.size()){
            return true;
        }
        return false;
    }
};
