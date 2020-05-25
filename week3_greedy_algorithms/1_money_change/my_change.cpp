#include<iostream>
using namespace std;

int get_change(int m){
    int arr[]={0,0,0};

    while(m){
        if(m>=10){
            arr[2]+=m/10;
            m=m%10;
        }
        else if((m<10) && (m>=5)){
            arr[1]+=m/5;
            m=m%5;
        }
        else{
            arr[0]+=m/1;
            m=m%1;
        }
    }

    return (arr[0]+arr[1]+arr[2]);
}

int main(){
    int m;
    cin>>m;

    cout<<get_change(m)<<endl;

    return 0;
}