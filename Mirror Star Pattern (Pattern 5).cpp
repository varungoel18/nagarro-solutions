#include <iostream>                    
using namespace std;
/*
      *            1 
   *  *  *         2                                    n=5  5/2 = 2.5     4/2=2
*  *  *  *  *      3
   *  *  *         4
      *            5
*/
int main() {
    int n;
    cin>>n;
    int val = 1;
    int space  = n/2;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=space;j++) {
            cout<<"\t";
        }
        for(int j=1;j<val * 2;j++) {
            cout<<"*"<<"\t";
        }
        cout<<endl;
        if(i<=n/2) {
            space --;
            val++;
        }
        else{
            space++;
            val--;
        }

    }
}
