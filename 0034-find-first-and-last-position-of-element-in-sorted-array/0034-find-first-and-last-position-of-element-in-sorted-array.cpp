class Solution {
public:
int firstocc(vector<int>nums,int target){
    int low=0;
    int high=nums.size()-1;
  int mid=low+(high-low)/2;
    int ans=-1;
    while(low<=high){
        if(nums[mid]==target){
            ans=mid;
            high=mid-1;
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid=low+(high-low)/2;
    }
    return ans;
}
int secondocc(vector<int>nums,int target){
    int low=0;
    int high=nums.size()-1;
    int mid=low+(high-low)/2;
    int ans=-1;
    while(low<=high){
        if(nums[mid]==target){
            ans=mid;
            low=mid+1;
        }
        else if(nums[mid]>target){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
        mid=low+(high-low)/2;

    }
    return ans;
}

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        ans.push_back(firstocc(nums,target));
        ans.push_back(secondocc(nums,target));
        return ans;  
    }
};