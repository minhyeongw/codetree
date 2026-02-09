#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    bool stat=false;
    cin>>a>>b>>c;
    for(int i=a;i<=b;i++){
        if (i%c==0){
            stat=true;
        }
    }
    if (stat==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    // Please write your code here.
    return 0;
}