#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<i*j<<" ";
        }
        cout<<endl;
    }
    // Please write your code here.
    return 0;
}