class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& num) {
      if(num.empty()){
          return num;
      }
        sort(num.begin(),num.end());
        int n = num.size();
        vector<int> ans;
        for(int i=1; i<=n; i++){
            if(!binary_search(num.begin(),num.end(),i)){
                ans.push_back(i);
            } 
        }
        return ans;
    }
};
