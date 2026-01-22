class Solution {
public:
    int first(vector<int>& nums, int target){
        int ans=-1;
        int st=0;
        int end=nums.size()-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                ans=mid;
                end=mid-1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    };
    int last(vector<int>& nums, int target){
        int ans=-1;
        int st=0;
        int end=nums.size()-1;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                ans=mid;
                st=mid+1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
    };
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        return{first(nums,target),last(nums,target)};
    }
};