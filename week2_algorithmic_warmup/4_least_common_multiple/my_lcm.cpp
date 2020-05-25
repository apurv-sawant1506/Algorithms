#include<iostream>
#include<algorithm>
using namespace std;

//If code does not run within time limits:
//Use the following formula:
//LCM(a,b) = ( a × b) / GCF(a,b)

long long find_lcm(int a,int b){
    for(int i=1;i<=a;i++){
        if(((long long)b*i)%a == 0)
            return (long long)b*i;
    }

    return (long long)a*b;
}

int main(){
    int a,b;

    cin>>a>>b;

    cout<<find_lcm(a,b)<<endl;

    return 0;
}