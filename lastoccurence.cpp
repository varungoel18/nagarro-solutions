#include<iostream>
using namespace std;

int lastoccurence(int arr[],int n,int key) {
// base case
if(n==0) {
    return -1;
}
// recursive case
int i = lastoccurence(arr+1,n-1,key);
if(i==-1) {
    if(arr[0]== key) {
        return 0;
    }
    else {
        return -1;
    }
}
return i+1;
}
int firstoccurence(int arr[],int n , int key) {
    // base case
if(n==0) {
    return -1;
}
// recursive case
if(arr[0]== key) {
    return 0;
}
int i = firstoccurence(arr+1,n-1,key);
if(i==-1) {
    return -1;
}
    return i+1;
}
int main() {
int arr[] = {1,2,3,4,5,7,8,7,9};
int n = sizeof(arr)/sizeof(arr[0]);
int key;
cin>>key;
cout<<firstoccurence(arr,n,key)<<endl;
cout<<lastoccurence(arr,n,key)<<endl;
}
