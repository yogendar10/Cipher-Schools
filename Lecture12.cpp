#include <iostream>
using namespace std;
int main(){
    
    int password;
    cout<<"Enter password";
    cin>>password;
    while(password<99){
        cout<<"The password does not meet the required condition, Please enter the password again";
        cin>>password;
    }
    cout<<"The user has now entered a correct password"<<endl;


    do{
        cin>>password;
    }while(password<99);


    for(int i = 0 ; ;i++){
        cout<<i<<" ";
        if(i>100)break;
    }



    return 0;

}
