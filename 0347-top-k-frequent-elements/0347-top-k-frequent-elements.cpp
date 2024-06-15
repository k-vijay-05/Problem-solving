class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>>p;
        for(auto it:m){
            p.push_back(make_pair(it.second,it.first));
        }
        sort(p.rbegin(),p.rend());
        for(int i=0;i<p.size();i++){
            if(k>0){
                ans.push_back(p[i].second);
                k--;
            }
            else{
                break;
            }
            
        }
        
        return ans;
    
        
    }
};