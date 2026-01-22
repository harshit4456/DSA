#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
    }cout<<endl;
    
}

void insertionsort(int arr[], int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp=arr[i];
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[]={4,2,3,2,34,55};
    int n=sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    display(arr,n);
    return 0;
}