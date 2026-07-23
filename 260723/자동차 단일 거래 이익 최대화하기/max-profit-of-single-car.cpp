#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int max;
    if (n>1){
        max=p[1]-p[0];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if (p[j]-p[i]>max){
                    max=p[j]-p[i];
                }
            }
        }
    }
    else{
        max=0;
    }
    if (max<0){
        cout<<0<<endl;
    }
    else{
        cout<<max<<endl;
    }
    // Please write your code here.
    return 0;
}