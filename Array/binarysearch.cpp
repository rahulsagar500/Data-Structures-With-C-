#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start =0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]>key)
        {
            end=mid-1;
        }
        else if (arr[mid]<key)
        {
            start=mid+1;
        }
        mid=(start+end)/2;
        }
        return -1;
}
int main(){
    int even[6]={1,2,3,4,5,6};    //taking a even array
    int odd[7]={1,2,3,4,5,6,7};   //taking the odd array
    cout<<"Index of 5 in even is: "<<binarysearch(even,6,5)<<endl;
    cout<<"Index of 7 in odd is: "<<binarysearch(odd,7,7);
    return 0;
}