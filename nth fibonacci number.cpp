#include<iostream>
using namespace std;
int fibnum(int n) {
//base class
if(n==0 or n==1) {
    return n;
}
//recursive case;
int f1 = fibnum(n-1);
int f2 = fibnum(n-2);
return f1+f2;
}
int main() {
int n;
cin>>n;
cout<<fibnum(n)<<endl;
}
