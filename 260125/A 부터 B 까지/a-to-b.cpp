#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int k=a;
    while (k<=b){
        cout<<k<<" ";
        if(k%2==1){
            k*=2;
        }
        else{
            k+=3;
        }
    }
    // Please write your code here.
    return 0;
}