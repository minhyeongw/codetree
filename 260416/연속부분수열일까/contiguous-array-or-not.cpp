#include <iostream>
using namespace std;

int main() {
    int n1,n2;
    cin>>n1>>n2;
    int a[n1],b[n2];
    bool con=false;

    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }

    for(int i=0;i<n1-1;i++){
        for(int j=0;j<n2-1;j++){
            if (a[i]==b[j] && a[i+1]==b[j+1]){
                con=true;
            }
        }
    }

    if (con==true){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    // Please write your code here.
    return 0;
}