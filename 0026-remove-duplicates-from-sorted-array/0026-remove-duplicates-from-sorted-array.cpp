class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int k=1;
        int n=arr.size();
        int j=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
              arr[j++]=arr[i+1];
                k++;
            }
        }
        return k;
        
    }
};