#include<iostream>
using namespace std;
int firstocc(int arr[], int n, int i, int key) {
 if (i == n) {
 return -1;
 }
 if (arr[i] == key) {
 return i;
 }
 return firstocc(arr, n, i + 1, key);
}
int lastocc(int arr[], int n, int i, int key) {
 if (i == n) {
 return -1;
 }
 int restArray = lastocc(arr, n, i + 1, key);
 if (restArray != -1) {
 return restArray;
 }
 if (arr[i] == key) {
 return i;
 }
 return -1;
}
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,2,5,6,7,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<firstocc(arr,n,0,4);
    cout<<lastocc(arr,n,0,4);
    return 0;
}

