#include<iostream>
using namespace std;

int linear_search(int low,int high,int key,int arr[]){
    if(low>high)
        return -1;
    
    if(arr[low]==key)
        return low;

    return linear_search(low+1,high,key,arr);
}


int main(){

    int arr[]={10,20,30,40,50};

    cout<<linear_search(0,4,50,arr)<<endl;

    return 0;
}