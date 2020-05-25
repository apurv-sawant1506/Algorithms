// S(n) = F(n+2) – 1
#include<iostream>
#include<cstdlib> //It is used to find absolute difference between two numbers.
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

int get_answer(long long n,long long m){

    int fib1=fib(n+2);
    int fib2=fib(m+1);

    if(fib1<fib2){
      fib1+=10;
      return (fib1-fib2);
    }

    return (fib1-fib2);
}

int main(){
    long long n,m;
    cin>>m>>n;

    cout<<get_answer(n,m)<<endl;

    return 0;
}