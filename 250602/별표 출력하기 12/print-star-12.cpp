#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((j>=i&&j%2==1)||i==0){
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