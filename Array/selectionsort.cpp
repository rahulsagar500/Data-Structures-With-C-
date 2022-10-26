#include<iostream>
using namespace std;
void selectionsort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minInd=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                minInd=j;
            }
        }
        swap(arr[i],arr[minInd]);
    }
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[7]={6,5,4,3,2,1,9};
    selectionsort(arr,7);
    cout<<"Displaying the array after performing the selection sort: ";
    display(arr,7);
    return 0;
}
