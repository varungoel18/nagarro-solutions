#include<iostream>
using namespace std;
int mult(int a,int b) {
// base case
if(a==0 || b==0) {
    return 0;
}
// recursive case
a = a + mult(a,(b-1));
return a;
}
int main() {
int a,b;
cin>>a>>b;
cout<<mult(a,b)<<endl;
}
