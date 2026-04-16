#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    int newarr[n];
    int a=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]%2==0){
            newarr[a]=arr[i];
            a++;
        }
    }

    for(int i=0;i<a;i++){
        cout<<newarr[i]<<" ";
    }
    // Please write your code here.
    return 0;
}