#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<2*n+1;i++){
        for(int j=0;j<2*n+1;j++){
            if(i%2==0||j%2==0){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    // Please write your code here.
    return 0;
}