#include<iostream>
using namespace std;
void sortingarr(int arr1[],int arr2[],int size1,int size2,int arr3[]){
    int i=0,j=0,k=0;

    while(i<size1 && i<size2){
        if(arr1[i]>arr2[j]){
            arr3[k]=arr2[j];
            k++;
            j++;
        }
        else{
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        
    }
    while(i<size1){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while(j<size2){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}
void display(int arr3[],int size3){
    cout<<"{ ";
    for(int i=0;i<size3;i++){
        cout<<arr3[i]<<" ";
    }
    cout<<"}";

}

int main(){
    int arr1[]={1,3,5,7,9};
    int arr2[]={2,4,6,10};
    int arr3[9]={0};
    cout<<"Printing the array after sorting from two arrays: "<<endl;
    sortingarr(arr1,arr2,5,4,arr3);
    display(arr3,9);
    return 0;
}