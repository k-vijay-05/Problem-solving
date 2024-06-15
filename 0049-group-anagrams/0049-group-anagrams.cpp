class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>m;
        int s=strs.size();
        for(int i=0;i<s;i++){
            string st=strs[i];
            sort(strs[i].begin(),strs[i].end());
            m[strs[i]].push_back(st);
        }
        for(auto it:m){
            ans.push_back(it.second);
        }
        return ans;
    }
};