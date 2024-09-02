#include<iostream>
using namespace std;
int main(){
    int marks ;
    cout<<"enter a marks:"<<endl;
    cin>>marks;
    if (marks>33)
    {
        /* code */
        cout<<"pass"<<endl;

    }
    else{
        cout<<"Fail"<<endl;

    }
    marks>33? cout<<"pass"<<endl: cout<<"fail"<<endl;
    return 0;


    }