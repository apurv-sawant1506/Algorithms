#include<iostream>
using namespace std;

void display(int *arr,int n){
    //swapping arr[2] and arr[4]

    int temp=arr[2];
    arr[2]=arr[4];
    arr[4]=temp;
}

int main(){
    int arr[]={10,20,30,40,50,60};

    display(arr,6);

    // cout<<arr[4]<<endl;

    return 0;
}