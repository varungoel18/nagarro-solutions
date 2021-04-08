#include<iostream>
using namespace std;
bool sort(int arr[],int n) {
//base case
if(n==0 || n==1) {
        return true;
}
// recursive function
if(arr[0]<arr[1] and sort(arr+1,n-1)) {
    return true;
}
return false;
}
int main() {
int arr[] = {1,2,3,4,5};
int n = sizeof(arr)/sizeof(int);
cout<<sort(arr,n)<<endl;

}
