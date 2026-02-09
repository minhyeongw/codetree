#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    bool stat=false;
    for(int i=a;i<=b;i++){
        if (i%c==0){
            stat=true;
        }
    }
    if (stat==false){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    // Please write your code here.
    return 0;
}