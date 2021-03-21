#include <iostream>
using namespace std;

int main(){
    int input[100], count, i, num;


    cin >> count;

    for(i = 0; i < count; i++){
        cin >> input[i];
    }

    cin >> num;

    for(i = 0; i < count; i++){
        if(input[i] == num){
            cout << i;
            break;
        }
    }

    if(i == count){
        cout  << "-1";
    }

    return 0;
}


