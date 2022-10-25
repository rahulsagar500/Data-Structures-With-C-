#include<iostream>
using namespace std;
void input(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10]; //declaring an array of size 10
    cout<<"Enter any 10 numbers: "<<endl;
    input(arr,10);// taking the input of the array from the user
    cout<<"Displaying the array: "<<endl;
    display(arr,10);  // displaying the array
    return 0;
}