#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;
int arr1[n];
int arr2[n];
for(int i=0;i<n;i++) {
    cin>>arr1[i];
}

for(int i=0;i<n;i++) {
    cin>>arr2[i];
}

int i=0;
while(i<n) {
    if(arr1[arr2[i]]!=i) {
        cout<<false<<endl;
    }
    i++;
}
if(i==n) {
    cout<<"true"<<endl;
}

}
