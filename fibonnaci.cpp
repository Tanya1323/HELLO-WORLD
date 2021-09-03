#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int fib(int n)
{ if(n==1 || n==2)
      return n-1;
	  else
	  return (fib(n-1)+fib(n-2));

}


int main() {
int n;
cin>>n;

int x=fib(n);
if(x%2==0)
cout<<"Dead";
else
cout<<"Alive";
	return 0;
}
