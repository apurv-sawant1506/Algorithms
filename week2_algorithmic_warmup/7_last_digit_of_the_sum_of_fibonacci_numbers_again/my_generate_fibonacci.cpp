#include<iostream>
using namespace std;

int generate_fibonacci(int n){
    if(n<2)
        return n;

    int prev=0,curr=1,tp;

    for(int i=2;i<=n;i++){
        tp=prev;
        prev=curr;
        curr=(tp+prev)%10;
    }

    return curr;
}

int main(){
    int n;
    cin>>n;

    cout<<generate_fibonacci(n)<<endl;

    return 0;
}