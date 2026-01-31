#include <iostream>
using namespace std;

int main() {
    int n, cnt=0;
    cin>>n;
    int res=n;
    for(int i=1;i<=n;i++){
        res=res/i;
        cnt+=1;
        if (res<=1){
            cout<<cnt;
            break;
        }
    }
    // Please write your code here.
    return 0;
}