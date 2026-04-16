#include <iostream>
using namespace std;

int main() {
    char arr[6]={'L','E','B','R','O','S'};
    int idx=-1;
    char a;
    cin>>a;

    for(int i=0;i<6;i++){
        if (arr[i]==a){
            idx=i;
        }
    }

    if (idx==-1){
        cout<<"None"<<endl;
    }
    else{
        cout<<idx<<endl;
    }
    // Please write your code here.
    return 0;
}