#include <iostream>
using namespace std;

int compare(int a , int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
    
}
int comparee(int a){
    if(a==5){
        return 1;
    }
        return 0;
    
}
int sum(int a , int b){
    return a+b;
}

int main(){
    cout<<compare(34,45)<<endl;
    int a;
    cin>>a;
    cout<<comparee(a)<<endl;
    cout<<sum(3,4);

    return 0;

}