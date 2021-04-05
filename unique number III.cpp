#include<iostream>
using namespace std;
int main() {
int n;
cin>>n;
int cnt[64] = {0};
int no;
for(int i=0;i<n;i++) {
    cin>>no;
    // updating the array
    int j=0;
    while(no>0) {
            int last_bit = (n&1);
        cnt[j] += last_bit;
    j++;
    no=no>>1;
    }
}
// iterate over the array and mod with 3;
int p=1;
int ans=0;
for(int i=0;i<64;i++) {
    cnt[i] %= 3;
    ans += (cnt[i]*p);
    p=p*2;
}
// printing the final answer
cout<<ans<<endl;
return 0;
}
