#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b) 
{ 
    return (a < b); 
}

int find_sum(int n,vector<int> &a,vector<int> &b){
    int size = n, a_max,b_max,result=0,a_max_index,b_max_index;

    while(size){
        a_max=*max_element(a.begin(),a.end(),comp);
        b_max=*max_element(b.begin(),b.end(),comp);

        if(size==1){
            cout<<a_max<<endl<<b_max<<endl;
        }

        result+=(a_max*b_max);

        a_max_index=max_element(a.begin(),a.end()) - a.begin();
        b_max_index=max_element(b.begin(),b.end()) - b.begin();

        a.erase(a.begin() + a_max_index);
        b.erase(b.begin() + b_max_index);

        size--;
    }

    return result;
}

int main(){
    int n,x;
    cin>>n;

    vector<int> a(n);
    vector<int> b(n);

    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }

    for(int i=0;i<n;i++){
        cin>>x;
        b.push_back(x);
    }

    cout<<find_sum(n,a,b)<<endl;

    return 0;
}