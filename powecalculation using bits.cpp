#include<iostream>
using namespace std;
int powercal(int a,int n) {
int ans = 1;
while(n>0)
{
    int last_bit = (n&1);
    if(last_bit == 1) {
        ans=ans*a;
    }
    a=a*a;
    n= n>>1;

}
return ans;
return 0;
}
int main() {
int a,n;
cin>>a>>n;
cout<<powercal(a,n)<<endl;
}
