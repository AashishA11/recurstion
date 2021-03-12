#include<iostream>
using namespace std;
int factorial(int n)
{
    cout<<n<<" ";
    if(n==0)
    {
        return 1;
    }
    //int factorial_is=n*factorial(n-1);
    return n*factorial(n-1) ;
    cout<<n<<" ";
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
