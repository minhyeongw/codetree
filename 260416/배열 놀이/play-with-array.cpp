#include <iostream>
using namespace std;

int main() {
    int n,q,num,a,b,s,e;
    cin>>n>>q;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<q;i++){
        cin>>num;
        if (num==1){
            cin>>a;
            cout<<arr[a-1]<<endl;
        }
        else if (num==2){
            cin>>b;
            int idx=0;
            for(int j=0;j<n;j++){
                if (arr[j]==b){
                    idx=j+1;
                    break;
                }
            }
            cout<<idx<<endl;
        }
        else{
            cin>>s>>e;
            for(int j=s-1;j<e;j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }
    }
    // Please write your code here.
    return 0;
}