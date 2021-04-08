#include<iostream>
using namespace std;
void dec(int n) {
//base class
if(n==0) {
    return;
}
// recursive case
cout<<n<<" ";
dec(n-1);
}

void inc(int n) {
//base class
if(n==0) {
    return ;
}
// recursive case
inc(n-1);
cout<<n<<" ";
}
int main() {
int n;
cin>>n;
dec(n);
cout<<endl;
inc(n);
}
