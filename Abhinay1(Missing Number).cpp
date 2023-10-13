class Solution {
public:
    int missingNumber(vector<int>& nums) {
        /*map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int ans;
        for(int i=0;i<=nums.size();i++){
            if(mpp.find(i)==mpp.end()){
                ans=i;
            }
        }
        return ans;*/
        /*int ans;
        for(int i=0;i<=nums.size();i++){
            int flag=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i){
                    flag=1;
                    break;
                }
            }
            if(!flag)
            {  ans=i;
            }

        }
        return ans;*/

        sort(nums.begin(),nums.end());
        int s=0;
        int e=nums.size()-1;
        int mid = s+(e-s)/2;

        while(s<=e)
        {
            if(nums[mid]<=mid)
                s=mid+1;
            else
                e=mid-1;
            mid = s+(e-s)/2;
        }
        return s;
    }
};
