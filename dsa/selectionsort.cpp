#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }cout<<endl;
    
}

void selection(int arr[], int n){

    for(int i=0;i<n;i++){
            int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        } swap(arr[minindex],arr[i]);
    }
}
int main(){
    int arr[]={4,2,3,2,34,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    selection(arr,n);
    display(arr,n);
    return 0;
}