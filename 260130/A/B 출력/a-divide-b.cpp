#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    cout<<a/b<<".";
    int k=a;
    for(int i=0;i<20;i++){
        
        k=(k%b)*10;
        cout<<k/b;
    }
    // Please write your code here.
    return 0;
}