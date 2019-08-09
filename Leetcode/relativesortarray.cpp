class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int k=0;
        for(int i=0;i<arr2.size();i++){
            for(int j=k;j<arr1.size();j++){
                if(arr2[i]==arr1[j]){
                    swap(arr1[j],arr1[k]);
                    k++;
                }
            }
        }
        sort(arr1.begin()+k,arr1.end());
        return arr1;
    }
};
