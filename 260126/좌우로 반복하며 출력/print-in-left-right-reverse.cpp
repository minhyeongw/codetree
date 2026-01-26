#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        int cnt=1;
        if(i%2==0){
            for(int j=0;j<n;j++){
                arr[i][j]=cnt;
                cnt+=1;
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                arr[i][j]=cnt;
                cnt+=1;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    // Please write your code here.
    return 0;
}