#include<iostream>
using namespace std;
void display(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    } cout<<endl;
}
void alt(int arr[], int n){
    for(int i=0;i<n;i+=2){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr[]={112,2,3,3,4,32,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    alt(arr,n);
    display(arr,n);
    return 0;

}