class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector <int> non;
        int cn=0;
        for(int i=0;i<heights.size();i++){
            non.push_back(heights[i]);
        }
        sort(non.begin(),non.end());
        for(int i=0;i<non.size();i++){
            if(heights[i]!=non[i]){
                cn++;
            }
        }
        return cn;
    }
};
