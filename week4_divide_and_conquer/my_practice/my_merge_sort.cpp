#include<iostream>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int left_length= (mid-low)+1;
    int right_length = (high-mid);

    int left_index=0,right_index=0;

    int left_array[left_length],right_array[right_length];

    for(int i=0;i<left_length;i++){
        left_array[i]=arr[low+i];
    }
    for(int i=0;i<right_length;i++){
        right_array[i]=arr[mid+1+i];
    }

    int k=low;

    while((left_index < left_length) && (right_index < right_length)){
        if(left_array[left_index]<=right_array[right_index]){
            arr[k]=left_array[left_index];
            left_index++;
        }
        else{
            arr[k]=right_array[right_index];
            right_index++;
        }

        k++;
    }

    while(right_index < right_length){
        arr[k]=right_array[right_index];
        right_index++;
        k++;
    }
    while(left_index < left_length){
        arr[k]=left_array[left_index];
        left_index++;
        k++;
    }
}

void mergesort(int arr[],int low,int high){ //ok
    if(low<high){
        int mid=(low+ ((high-low)/2));

        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);

        merge(arr,low,mid,high);
    }
}

int main(){
    int arr[]={15,23,8,2,85,7};

    mergesort(arr,0,5);

    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }

    // cout<<"This code editor is working!"<<endl;

    return 0;
}