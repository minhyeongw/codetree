#include <iostream>

using namespace std;

int st, ed;

int main() {
    cin >> st >> ed;
    int total=0;
    for(int i=st;i<=ed;i++){
        int num=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                num+=1;
            }
        }
        if(num==3){
            total+=1;
        }
    }
    cout<<total;
    // Please write your code here.

    return 0;
}
