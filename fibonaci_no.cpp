#include<iostream>
using namespace std;
int fib(int n)
{
    cout<<n<<" ";
    if(n==0||n==1)
    return n;
    int f=fib(n-1)+fib(n-2);
    //cout<<n<<" ";

    return f;
}
int main(int argc, char const *argv[])
{int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}
