#include <iostream>

using namespace std;
struct fraction{
    int nu;
    int de;
};

int main()
{
    fraction fract1,fract2,fract3;
char r;

do{
char ch='/';
char oper;


cout<<"Enter first function :";
cin>>fract1.nu>>ch>>fract1.de;

cout<<"Enter the operator :";
cin>>oper;

cout<<"Enter second function :";
cin>>fract2.nu>>ch>>fract2.de;


switch(oper){

case '+':
    fract3.nu=(fract1.nu*fract2.de)+(fract2.nu*fract1.de);
    fract3.de=fract1.de*fract2.de;
    cout<<"Answer: "<<fract3.nu<<"/"<<fract3.de;


    case '-':
    fract3.nu=(fract1.nu*fract2.de)-(fract2.nu*fract1.de);
    fract3.de=fract1.de*fract2.de;
    cout<<"Answer: "<<fract3.nu<<"/"<<fract3.de;
    break;

    case '*':
    fract3.nu=fract1.nu*fract2.nu;
    fract3.de=fract1.de*fract2.de;
    cout<<"Answer: "<<fract3.nu<<"/"<<fract3.de;
    break;

    case '/':
    fract3.nu=fract1.nu*fract2.de;
    fract3.de=fract1.de*fract2.nu;
    cout<<"Answer: "<<fract3.nu<<"/"<<fract3.de;
   break;

}

cout<<"\n Do you wish to continue (y/n)"<<endl;
cin>>r;
}while(r=='n');

return 0;
}
