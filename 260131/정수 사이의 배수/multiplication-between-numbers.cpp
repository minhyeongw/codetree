#include <iostream>
using namespace std;

int main() {
    int a,b,sum=0,cnt=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if (i%5==0 || i%7==0){
            cnt+=1;
            sum+=i;
        }
    }
    cout<<fixed;
    cout.precision(1);
    cout<<sum<<" "<<(double)sum/cnt;
    // Please write your code here.
    return 0;
}