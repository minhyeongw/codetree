#include <iostream>
using namespace std;

int main() {
    int cnt=0;
    int a;
    for(int i=0;i<10;i++){
        cin>>a;
        if (a%2==1){
            cnt+=1;
        }
    }
    cout<<cnt;
    // Please write your code here.
    return 0;
}