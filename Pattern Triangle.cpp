#include <iostream>
using namespace std;
/*
            1
		2	3	2
	3	4	5	4	3
4	5	6	7	6	5	4
*/
int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n-i;j++) {
            cout<<"\t";
        }
        int val = i;
        for(int j=1;j<=i;j++) {
            cout<<val<<"\t";
            val++;
        }
        val = val-2;
    for(int j=1;j<=i-1;j++) {
        cout<<val<<"\t";
        val--;
    }
    cout<<endl;
    }
}
