#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int binarysearch(int arr[], int n, int key){
    int st=0;
    int end=n-1;
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
    int arr[]={1,2,3,5,6,7,99,111};
    int key=99;
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=binarysearch(arr,n,key);
    if( index!=0){
        cout<<"element found at index:"<<index<<endl;
    }else{
        cout<<"elemtn not found"<<endl;
    }
    display(arr,n);
    return 0;
}