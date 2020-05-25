// S(n) = F(n+2) – 1
#include<iostream>
using namespace std;

int fib(long long n) 
{ 
  int a = 0, b = 1, c;
  long long i;

  if( n == 0) 
    return a; 
  for (i = 2; i <= n; i++) 
  { 
     c = (a + b)%10; 
     a = b; 
     b = c; 
  } 
  return b; 
} 

int get_answer(long long n){
    
    return (fib(n)*fib(n+1))%10;
}

int main(){
    long long n;
    cin>>n;

    cout<<get_answer(n)<<endl;

    return 0;
}