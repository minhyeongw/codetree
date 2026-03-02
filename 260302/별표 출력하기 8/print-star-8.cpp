#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if (i%2==0){
            for(int j=0;j<i;j++){
                cout<<"* ";
            }
        }
        else{
            cout<<"*";
        }
        cout<<endl;
    }
    // Please write your code here.
    return 0;
}