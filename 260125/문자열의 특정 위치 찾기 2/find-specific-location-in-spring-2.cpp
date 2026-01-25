#include <iostream>
using namespace std;

int main() {
    string arr[5]={"apple", "banana", "grape","blueberry" ,"orange"};
    char a;
    int cnt=0;
    cin>>a;
    for(int i=0;i<5;i++){
        if(arr[i][2]==a||arr[i][3]==a){
            cnt+=1;
            cout<<arr[i]<<endl;
        }
    }
    cout<<cnt;
    // Please write your code here.
    return 0;
}