class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector <int> array,even,odd;
        for(int i=0;i<A.size();i++){
            if(A[i]%2==0){
                even.push_back(A[i]);
            }
            else{
                odd.push_back(A[i]);
            }
        }
        int m=0,n=0;
        for(int i=0;i<A.size();i++){
            if(i%2!=0){
                array.push_back(odd[m]);
                m++;
            }
            else{
                array.push_back(even[n]);
                n++;
            }
        }
        return array;
    }
};
