#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int num=0;
    for(int i=0;i<n;i++){
        if (arr[i]==2){
            num++;
        }
        if (num==3){
            cout<<i+1<<endl;
            break;
        }
    }
    // Please write your code here.
    return 0;
}