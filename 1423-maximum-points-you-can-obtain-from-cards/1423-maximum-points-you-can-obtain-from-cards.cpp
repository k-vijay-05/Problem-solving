class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total=0;
        int i=k-1;
        int j=cardPoints.size()-1;
        for(int i=0;i<k;i++){
        total+=cardPoints[i];
        }
        int ans=0;
        int res=total;
      while((k--)){
        ans=total-cardPoints[i]+cardPoints[j];
        res=max(ans,res);
        total=ans;
        i--;
        j--;
     }
     return res;

    }
};