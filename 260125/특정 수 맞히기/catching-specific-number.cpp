#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    while(a!=25){
        if(a>25){
            cout<<"Lower"<<endl;
        }
        else if(a<25){
            cout<<"Higher"<<endl;
        }
        cin>>a;
    }
    cout<<"Good";
    // Please write your code here.
    return 0;
}