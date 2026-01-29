#include <iostream>
using namespace std;

int main() {
    int m;
    cin>>m;
    if (m>=12 || m<=2){
        cout<<"Winter";
    }
    else if (m>=9){
        cout<<"Fall";
    }
    else if (m>=6){
        cout<<"Summer";
    }
    else if (m>=3){
        cout<<"Spring";
    }
    // Please write your code here.
    return 0;
}