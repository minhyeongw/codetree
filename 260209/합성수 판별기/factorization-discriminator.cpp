#include <iostream>
using namespace std;

int main() {
    int n;
    bool stat=true;
    cin>>n;
    for(int i=2;i<n;i++){
        if (n%i==0){
            stat=false;
        }
    }
    if (stat==true){
        cout<<"N";
    }
    else{
        cout<<"C";
    }
    // Please write your code here.
    return 0;
}