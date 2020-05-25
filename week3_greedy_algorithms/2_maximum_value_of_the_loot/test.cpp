#include<bits/stdc++.h>
using namespace std;

struct item{
    int value,weight,fraction;
};


bool compare(const item &item1,const item &item2){
    return item1.fraction>item2.fraction;
}

int main(){
    int n=3;

    // item *arr= new item[n];
    item arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i].value;
        cin>>arr[i].weight;
        arr[i].fraction=((arr[i].value)/(arr[i].weight));
    }

    for(int i=0;i<n;i++){
        cout<<arr[i].fraction<<endl;
    }

    cout<<"$$$$$$$$$$$$$$$$"<<endl;

    int arr_size=sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+arr_size,compare);

    for(int i=0;i<n;i++){
        cout<<arr[i].fraction<<endl;
    }

    return 0;
}