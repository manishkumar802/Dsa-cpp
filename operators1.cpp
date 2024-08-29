#include<iostream>
using namespace std;
int main (){
    int a = 4 ;
     cout<<sizeof(a)<<endl;

     char name = 'a';
     cout<<sizeof(name)<<endl;

     bool flag;
     a == name? flag = true: flag= false;
     cout<<flag<<endl;
     cout<<(&a)<<endl;

     // post increment operator 
    int c = 6;

     cout<<(c++)<<endl;
       
       //pre increment operator 
    int b = 4;
        cout<<(++b)<<endl;

     return 0 ; 

}