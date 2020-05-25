#include<iostream>
using namespace std;

int generate_fibonacci(int n){
    int a=0,b=1,curr;

    curr=a+b;
    if(n<2)
        return n;

    for(int i=2;i<n;i++){
        a=b;
        b=curr;
        curr=a+b;
    }

    return curr;
}

int main(){
    int n;
    cin>>n;

    cout<<generate_fibonacci(n)<<endl;

    return 0;
}