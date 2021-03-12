#include<iostream>
using namespace std;

int power(int n,int p)
{
    cout<<p<<" ";
    if(p==0)
    {
        return 1;
    }
    int poweris=n*power(n,p-1);
    return poweris;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    cout<<power(n,5);
    return 0;
}

