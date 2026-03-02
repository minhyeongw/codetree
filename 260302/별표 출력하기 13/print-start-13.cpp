#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a=n, b=1;

    for(int i=1;i<=2*n;i++){
        if (i%2==1){
            for(int j=a;j>0;j--){
                cout<<"* ";
            }
            a--;
        }
        else{
            for(int j=0;j<b;j++){
                cout<<"* ";
            }
            b++;
        }
        cout<<endl;
    }
    // Please write your code here.
    return 0;
}