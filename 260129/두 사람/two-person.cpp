#include <iostream>
using namespace std;

int main() {
    int age1, age2;
    char gen1, gen2;
    cin>>age1>>gen1>>age2>>gen2;

    if ((age1>=19 && gen1=='M') || (age2>=19 && gen2=='M')){
        cout<<1;
    }
    else{
        cout<<0;
    }
    // Please write your code here.
    return 0;
}