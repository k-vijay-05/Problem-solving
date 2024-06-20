class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==1) return 0;
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                continue;
            }
            else{
                while(nums[i+1]<=nums[i]){
                    nums[i+1]++;
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};