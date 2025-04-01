#include <iostream>
#include <string>
using namespace std;

int main(){


    int age;
    cout<<"Enter you age : ";
    cin>>age;
    cin.ignore();
    cout<<"Your age is "<<age<<"."<<endl;

    string name;
    cout<<"What is your first name? "<<endl;
    cin>>name; //This only takes input till first space
    cin.ignore();
    //But user have to enter only first name.
    cout<<"Your name is "<<name<<"."<<endl;

    
    string fullname;
    cout<<"Enter your full name : "<<endl;
    getline(cin,fullname);

    cout<<"Your full name is "<<fullname<<"."<< endl;

    return 0;

}