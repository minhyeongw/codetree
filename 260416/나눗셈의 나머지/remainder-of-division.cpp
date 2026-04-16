#include <iostream>
using namespace std;

int main() {
    int a,b,sum=0;
    cin>>a>>b;
    int arr[10]={};
    while(a>1){
        int k=a%b;
        a=a/b;
        arr[k]++;
    }

    for(int i=0;i<10;i++){
        sum+=arr[i]*arr[i];
    }

    cout<<sum<<endl;
    // Please write your code here.
    return 0;
}