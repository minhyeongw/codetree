#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int num=0;
    int arr[100];
    for(int i=0;i<100;i++){
        arr[i]=n*(i+1);
        cout<<arr[i]<<" ";
        if (arr[i]%5==0){
            num+=1;
        }
        if (num==2){
            break;
        }
    }
    // Please write your code here.
    return 0;
}