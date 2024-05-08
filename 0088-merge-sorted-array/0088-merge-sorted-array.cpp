class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
       vector<int> merged(m+n);//prelocate space for merged array
        int i=0,j=0,k=0;
        // Merge elements from both arrays until one of them is exhausted
        while(i<m && j<n){
            if(arr1[i]<arr2[j]){
                merged[k]=arr1[i];
                k++;
                i++;
            }
            else{
                merged[k]=arr2[j];
                k++;
                j++;
            }
        }
            //copy the remainnig elememt from arr1
            while(i<m){
                merged[k]=arr1[i];
                k++;
                i++;
            }
            while(j<n){
                merged[k]=arr2[j];
                k++;
                j++;
            }
            //copy the merged array in arr1
            for(int i=0;i<m+n;i++){
                arr1[i]=merged[i];
            }
        
    }
};
