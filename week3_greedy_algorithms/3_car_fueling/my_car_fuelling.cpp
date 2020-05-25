#include<iostream>
using namespace std;

int find_min_refuels(int d,int m,int n,int *a){
    int i=-1,count=0,dist=0;

    while(1){

    while((a[i+1]-dist)<=m){
        i++;
        if(i==(n-1)){
            if((d-a[i])>m){
                return -1;
            }
            else{
                if((d-dist)<=m)
                    return count;
                else{
                    count++;
                    return count;
                }
            }
        }
    }

    if((a[i+1]-a[i])>m){
        return -1;
    }
        count++;
        dist=a[i];
    }

    return count;
}

int main(){
    int d,m,n;
    cin>>d>>m>>n;

    int *arr=new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<find_min_refuels(d,m,n,arr)<<endl;

    return 0;
}