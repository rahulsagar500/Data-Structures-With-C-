#include<iostream>
using namespace std;
void bubblesort(int arr[],int size){
    for(int i=1;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10]={5,4,3,2,1,7,8,6,9,0};
    bubblesort(arr,10);
    display(arr,10);
    return 0;
}