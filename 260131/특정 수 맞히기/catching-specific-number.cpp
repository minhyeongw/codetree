#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    while(n!=25){
        if (n<25){
            cout<<"Higher"<<endl;
        }
        else if (n>25){
            cout<<"Lower"<<endl;
        }
        cin>>n;
    }
    cout<<"Good";
    // Please write your code here.
    return 0;
}