#include<iostream>
using namespace std;
void Reversing(int arr[],int size){
    int a=0,b=size-1;
    while(a<b){
        swap(arr[a],arr[b]);
        a++;
        b--;
    }
}
void display(int arr[],int size){
    cout<<"{ ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<" }";
}
int main(){
    int numbers[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    cout<<"Displaying array before reversing: ";
    display(numbers,size);
    cout<<endl<<"Displaying after reversing: ";
    Reversing(numbers,size);
    display(numbers,size);
    return 0;
}