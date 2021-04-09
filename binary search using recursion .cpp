#include<iostream>
using namespace std;
int bsearch(int arr[],int n,int num,int s,int e) {
//base case
if(n==0 || n==1) {
    return 0;
}
//recursive case
int m = (s+e)/2;
if(arr[m] == num) {
    return m;
}
if(arr[m]>num) {
    return bsearch(arr,n,num,s,m-1);
}
else{
    return bsearch(arr,n,num,m+1,e);
}
return -1;
}
int main() {
int arr[] = {1,2,3,4,5,6,7,8,7,9};
int n = sizeof(arr)/sizeof(int);
int num;
cin>>num;
int index = bsearch(arr,n,num,0,n-1);
if(index==-1) {
    cout<<"element not present"<<endl;
}
else{
    cout<<num<<" is present at "<<index<<endl;
}
}
