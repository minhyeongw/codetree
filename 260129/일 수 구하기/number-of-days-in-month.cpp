#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if (n%2==1){
        cout<<31;
    }
    else if (n!=2){
        cout<<30;
    }
    else{
        cout<<28;
    }
    // Please write your code here.
    return 0;
}