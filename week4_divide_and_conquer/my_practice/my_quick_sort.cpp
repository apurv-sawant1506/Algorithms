#include<iostream>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot=arr[high];
    int index=low;
    int temp;

    for(int i=low;i<=(high-1);i++){
        if(arr[i]<=pivot){
            //swap arr[i] and arr[index]
            temp=arr[i];
            arr[i]=arr[index];
            arr[index]=temp;

            index+=1;
        }
    }

    //swap arr[index] and arr[high]
    temp=arr[index];
    arr[index]=arr[high];
    arr[high]=temp;

    return index;
}

void quicksort(int arr[],int low,int high){
    if(low<high){
        int pivot_index=partition(arr,low,high);

        quicksort(arr,low,pivot_index-1);
        quicksort(arr,pivot_index+1,high);
    }
}

int main(){
    int arr[]={7,2,1,6,8,8,3,4};

    quicksort(arr,0,7);

    for(int i=0;i<8;i++)
        cout<<arr[i]<<endl;

    return 0;
}