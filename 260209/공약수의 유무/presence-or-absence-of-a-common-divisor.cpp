#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    bool stat=false;
    for(int i=a;i<=b;i++){
        if (1920%i==0 && 2880%i==0){
            stat=true;
        }
    }
    if (stat==true){
        cout<<1;
    }
    else{
        cout<<0;
    }
    // Please write your code here.
    return 0;
}