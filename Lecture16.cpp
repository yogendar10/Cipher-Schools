#include <iostream>
using namespace std;
int sum(int ,int );
int main(){
    //same number of parameters need to be used and ata the same positions
    int a,b;
    a=3;
    b=5;
    cout<<sum(a,b);


}

int sum(int a, int b){
    return a+b;
}
