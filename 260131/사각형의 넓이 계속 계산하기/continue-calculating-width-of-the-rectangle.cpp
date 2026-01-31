#include <iostream>
using namespace std;

int main() {
    int x,y;
    char c;
    cin>>x>>y>>c;
    while (c!='C'){
        cout<<x*y<<endl;
        cin>>x>>y>>c;
    }
    cout<<x*y;
    // Please write your code here.
    return 0;
}