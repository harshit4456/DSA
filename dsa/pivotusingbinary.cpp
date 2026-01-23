//Find Pivot in an Sorted & Rotated Array using Binary Search

#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    int s=0;
    int end=n-1;
    while(s<end){
        int mid=s+(end-s)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            end=mid;
        }
        
    }
    return s;
}

int binarysearch(int arr[],int st,int end,int key){
    while(st<=end){
        int mid=st+(end-st)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={3,4,5,6,1,2};
    int key=6;
    int ans=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    int pivot=getpivot(arr,n);
    if(key>=arr[pivot]&&key>=arr[0]){
        ans=binarysearch(arr,0,pivot-1,key);
    }
    else{
        ans=binarysearch(arr,pivot,n-1,key);
    }
    if (ans != -1)
        cout << "Element found at index: " << ans << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}