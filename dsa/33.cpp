//search in rotated sorted array
class Solution {
public:
int getpivot(vector<int>& nums,int size){
    int st=0;
    int end=size-1;
    while(st<end){
        int mid=st+(end-st)/2;
        if(nums[mid]>=nums[0]){
            st=mid+1;
        }
        else{
            end=mid;
        }
    }
    return st;
}
int binarysearch(vector<int>& nums,int st,int end,int target){
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(target<nums[mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int ans=0;
        int size=nums.size();
        int pivot=getpivot(nums,size);
        if (pivot == 0) {
            return binarysearch(nums, 0, size - 1, target);
        }
        if(target>=nums[0]&&target<=nums[pivot-1]){
            ans=binarysearch(nums,0,pivot-1,target);
        }
        else{
            ans=binarysearch(nums,pivot,size-1,target);
        }
        return ans;
    }

};

