#include <iostream>
using namespace std;

int main() {
    int arr1[3][3];
    int arr2[3][3];
    int newarr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            newarr[i][j]=arr1[i][j]*arr2[i][j];
            cout<<newarr[i][j]<<" ";
        }
        cout<<endl;
    }
    // Please write your code here.
    return 0;
}