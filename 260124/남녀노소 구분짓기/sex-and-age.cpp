#include <iostream>
using namespace std;

int main() {
    int gender,age;
    cin>>gender>>age;

    if (gender==0){
        if (age>=19){
            cout<<"MAN";
        }
        else{
            cout<<"BOY";
        }
    }
    else{
        if(age>=19){
            cout<<"WOMAN";
        }
        else{
            cout<<"GIRL";
        }
    }
    // Please write your code here.
    return 0;
}