class Solution {
public:
     void generateParenthesis(vector<string>& result, int open, int close, int n, string curr){
        if(curr.length() == 2*n)
            result.push_back(curr);
        else{
            if(open < n)
                generateParenthesis(result, open+1, close, n, curr+"(");
            if(close < open)
                generateParenthesis(result, open, close+1, n, curr+")");
        }
    }
    vector<string> generateParenthesis(int n) {
        
         vector<string> result;
        generateParenthesis(result, 0, 0, n, "");
        return result;
    }
};