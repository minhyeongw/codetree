#include <iostream>
using namespace std;

int main() {
    int n,m,count=0;
    
    cin>>n>>m;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]==m){
            count++;
        }
    }

    cout<<count<<endl;
    // Please write your code here.
    return 0;
}