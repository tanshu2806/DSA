//control flow
//All the data are imaginary please don't take any data seriously
#include <iostream>
using namespace std;

int main(){
    // int age;

    // cout<<"Enter you age : ";
    // cin>>age;

    // if (age>=18){
    //     cout<<"You are an adult."<<endl;
    // }

    // else{
    //     cout<<"You are minor.";
    // }

    // int marks;
    // cout <<"Enter your marks : ";
    // cin>>marks;

    // if(marks>90){
    //     cout<<"Grade A";
    // }
    // else if(marks >80){
    //     cout<<"Grade B";
    // }
    // else if(marks>70){
    //     cout<<"Grade C";
    // }
    // else if(marks> 60){
    //     cout<<"Grade D";
    // }

    // else{
    //     cout<<"FAIL";
    // }

    int height,weight;
    cout<<"Enter your height in ft : ";
    cin>>height;

    cout<<"Enter your weight in kg : ";
    cin>>weight;

    if(height>5){
        if(weight>70){
            cout<<"You are fit";
        }
        else{
            cout<<"You are under-nutritioned.";
        }
    }
    else{
        if(weight>70){
            cout<<"You are obese.";
        }
        else{
            cout<<"You are fit.";
        }
    }

}