class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int shift=k%nums.size();
        if(shift==nums.size()||shift==0){
            return;
        }
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+shift);
        reverse(nums.begin()+shift,nums.end());
        
    }
};