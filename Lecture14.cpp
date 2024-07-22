#include <iostream>
using namespace std;

// void printstuff(){
//     cout<<"Writing my first function";
// }
int sum(int a, int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    //return type is void = no return
    //every functions can have only one value but multiple return statement.
    //every func starts from the main function 
    // printstuff();
    int a =3,b=90;
    int summ=sum(a,b);
    cout<<summ;

    return 0;

}