class Solution {
public:
    void helper(int i,string &s,int n){
        if(i==n){
            return ;
        }
        int cnt=1;
        int j=0;
        string str="";
        while(j<s.length()){
            cnt=1;
          while (j + 1 < s.length() && s[j] == s[j + 1]) {
                cnt++;
                j++;
            }
            str+=(to_string(cnt)+s[j]);   
            j++;
        }
        s=str;
       helper(i+1,s,n);
        return;
    
    }
    string countAndSay(int n) {
        if(n==1) return "1";
        string s="1";
       helper(1,s,n);
        return s;
       
        
    }
};