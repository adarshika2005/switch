#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout <<"enter the value of a : "<<endl;
    cin>>a;
    cout <<"enter the value of b :  "<<endl;
    cin>>b;
    cout <<"enter the value of c :  "<<endl;
    cin>>c;
     char op;
        cout<<"enter the operation of traffic light(a,b,c) "<<endl ;
        cin>> op;
     
     switch (op) {
        case 'a':
        cout<<"red light"<<endl ;
        break;
         case 'b':
         cout<<" yellow light "<<endl ;
        break;
         case 'c':
         cout<<"green light" <<endl ;
         break;
        default :
        cout<<"operation on valid light(a,b,c) "<<endl ;
     }
     return 0;
}