class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int>ans;
        int sum=0;
        for(int k=0;k<A.size();k++){
            if(abs(A[k])%2==0){
                sum+=A[k];
                }
            }
            for(int j=0;j<queries.size();j++){
                if(A[queries[j][1]] % 2 == 0){
                    sum -= A[queries[j][1]];}
                A[queries[j][1]] += queries[j][0];
                if (A[queries[j][1]] % 2 == 0){
                    sum += A[queries[j][1]];}
                ans.push_back(sum);
            }
        return ans;
    }
};
