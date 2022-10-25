#include<iostream>
using namespace std;
void swapping(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int marks[10]={1,2,3,4,5,6,7,8,9,10};
    swapping(marks,10);
    display(marks,10);
    return 0;
    
}