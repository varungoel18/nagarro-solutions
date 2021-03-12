
/*
1
11
202
3003
40004
*/
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++) {
		if(i==0) {
			cout<<"1"<<endl;
		}
		else{
			for(int j=0;j<=i;j++) {
				if(j==0 || j==i) {
					cout<<i;
				}
				else{
					cout<<"0";
				}
			}
			cout<<endl;
		}
	}
    return 0 ;
}