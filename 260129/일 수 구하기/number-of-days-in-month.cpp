#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if (n<=7){
        if (n%2==1){
        cout<<31;
        }
        else if (n!=2){
        cout<<30;
        }
        else{
        cout<<28;
        }
    }
    else{
        if (n%2==0){
            cout<<31;
        }
        else{
            cout<<30;
        }
    }
    
    // Please write your code here.
    return 0;
}