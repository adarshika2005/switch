#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a is "<<endl;
    cin>>a;
    cout<<"enter the value of b is "<<endl;
    cin>>b;
     char op;
     cout<<"enter the opertion you want to perform "<<endl;
     cin>>op;
     switch (op){
        case '+': cout<<(a+b)<<endl;
        break;
        case '-': cout<<(a-b)<<endl;
        break;
        case '*': cout<<(a*b)<<endl;
        break;
        case '/': cout<<(a/b)<<endl;
        break;
        case '%': cout<<(a%b)<<endl;
        break;
        default :
        cout<<"please enter the valid operation "<<endl;

     }
}