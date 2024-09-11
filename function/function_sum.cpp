#include<iostream>
using namespace std;
int sum(int a , int b){
    int s = a+b;
    return s;

}
int minoftwo(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }

}
int maint(){
    cout<<sum(10,5)<<endl;
    cout<<minoftwo(5,10)<<endl;
    return 0;
}