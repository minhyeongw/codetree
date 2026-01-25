#include <iostream>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    if (a.length()<b.length()){
        cout<<b<<" "<<b.length();
    }
    else if(a.length()>b.length()){
        cout<<a<<" "<<a.length();
    }
    else{
        cout<<"same";
    }
    // Please write your code here.
    return 0;
}