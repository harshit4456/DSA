#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }cout<<endl;
    
}

void bubblesort(int arr[], int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[]={4,2,3,2,34,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,n);
    display(arr,n);
    return 0;
}