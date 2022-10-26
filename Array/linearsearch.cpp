#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"The index of the element 9 is "<<linearsearch(arr,10,9);
    return 0;
}