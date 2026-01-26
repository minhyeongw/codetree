#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int num=1;
    for (int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<num<<" ";
            num+=1;
        }
        cout<<endl;
    }
    // Please write your code here.
    return 0;
}