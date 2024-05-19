class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<0){
                    j++;
                }
                else if(sum>0){
                    k--;
                }
                else{
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1]) j++;
                    while(j<k && nums[k]==nums[k+1]) k--;
                }
            }
        }
        return ans;
        
    }
};



// //better  but (TLE)
// vector<vector<int>> threeSum(vector<int>& nums) {
//         set<vector<int>>s;
//         for(int i=0;i<nums.size();i++){
//             set<int>track;
//             for(int j=i+1;j<nums.size();j++){ 
//                 int third=-(nums[i]+nums[j]);
//                 if(track.find(third)!=track.end()){
//                     vector<int>temp={nums[i],nums[j],third};
//                     sort(temp.begin(),temp.end());
//                     s.insert(temp);
//                 }
//                 track.insert(nums[j]);
//             }
//         }
//         vector<vector<int>>ans(s.begin(),s.end());
//         return ans;
        
//     }