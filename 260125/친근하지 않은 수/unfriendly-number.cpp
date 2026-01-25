#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int num=0;
    for(int i=1;i<=n;i++){
        if(i%2==0 || i%3==0 || i%5==0){
            continue;
        }
        num+=1;
    }
    cout<<num;
    // Please write your code here.
    return 0;
}