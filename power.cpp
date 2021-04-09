#include<iostream>
using namespace std;
int pow(int n,int p) {
//Base function
if(p==0) {
    return 1;
}
// recursive part
int smaller_part = pow(n,p-1);
n= n*pow(n,p-1);
return n;
}
int main() {
int n,p;
cin>>n>>p;
cout<<pow(n,p)<<endl;

}
