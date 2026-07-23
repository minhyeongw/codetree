#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout<<fixed<<setprecision(1);
    int arr[2][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<2;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        cout<<sum/4.0<<" ";
    }
    cout<<endl;

    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<2;j++){
            sum+=arr[j][i];
        }
        cout<<sum/2.0<<" ";
    }
    cout<<endl;

    int sum=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
    }
    cout<<sum/8.0<<endl;
    // Please write your code here.
    return 0;
}