#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
int main() {
    // intersection of two arrays;
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

    for(int i=0;i<n;i++) {
        cin>>b[i];
    }

    int c[n];
    int k=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
           if(a[i] == b[j]) {
            c[k++] = a[i];
            b[j] = INT_MIN;
            break;
           }
        }                                                   // 7
//                                                            1 2 3 1 2 4 1
//                                                            2 1 3 1 5 2 2
    }
    sort(c,c+k);
    cout<<"[";
    for(int i=0;i<k;i++) {
        if(i==0) {
            cout<<c[i];
        }
        else {
            cout<<","<<c[i];
        }
    }
    cout<<"]";
}
