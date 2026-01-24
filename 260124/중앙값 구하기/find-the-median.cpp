#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int mid=0;
    if (a<b){
        if (a>c){
            mid=a;
        }
        else{
            if (b<c){
                mid=b;
            }
            else{
                mid=c;
            }
        }
    }
    else{
        if(b>c){
            mid=b;
        }
        else{
            if(a>c){
                mid=c;
            }
            else{
                mid=a;
            }
        }
    }
    cout<<mid;
    // Please write your code here.
    return 0;
}