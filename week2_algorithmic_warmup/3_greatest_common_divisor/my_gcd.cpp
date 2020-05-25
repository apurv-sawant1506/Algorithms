#include<iostream>
#include<algorithm>

using namespace std;

int find_gcd(int a,int b){
    if(b==0)
        return a;

    int a1=a%b;

    return find_gcd(b,a1);
}


int main(){
    int a,b;

    cin>>a>>b;

    cout<<find_gcd(max(a,b),min(a,b));

    return 0;
}