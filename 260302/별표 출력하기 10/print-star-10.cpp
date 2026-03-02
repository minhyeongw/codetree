#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a=1,b=n;
    for(int i=1;i<=2*n;i++){
        if (i%2==1){
            for(int j=0;j<a;j++){
                cout<<"* ";
            }
            a++;
        }
        else{
            for(int j=b;j>0;j--){
                cout<<"* ";
            }
            b--;
        }
        cout<<endl;
    }
    // Please write your code here.
    return 0;
}