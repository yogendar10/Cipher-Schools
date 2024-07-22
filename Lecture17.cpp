#include <iostream>
using namespace std;
void Printhi(){
    cout<<"Hi"<<endl;
    return;
}
int sum(int a, int b){
    int c = a+b;
    cout<<"the value of c is: "<<c<<endl;
    return c;
}
int main(){
    Printhi();
    int a,b;
    a = 4; 
    b=60;
    int c =100;

    int d ;
    d = sum(a,b);
    cout<<"The sum is "<<d<<endl;
    cout<<"the value of c is: "<<c;
    
    return 0;

}