class Solution {
public:
    vector<int> ithrow(int row){
        long long ans=1;
        vector<int>v;
        v.push_back(1);
        for(int col=1;col<row;col++){
            ans=ans*(row-col);
            ans=ans/(col);
            v.push_back(ans);
        }
        
        return v;
    }
    
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(ithrow(i));  
        }
        return ans;
    }
};