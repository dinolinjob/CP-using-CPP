class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int M = A.size(), N = A[0].size();
        vector<vector<int>> trans(N, vector<int>(M));
        for(int i=0;i<A.size();i++){
            for(int j=0;j<A[i].size();j++){
                trans[j][i] = A[i][j];
            }
        }
        return trans;
    }
};
