#include<iostream>
using namespace std;
int linearsearch(int arr[],int sz,int target){
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
return -1;
}
int main(){

int arr[]={4,2,7,8,1,2,5};
int sz=7;
int target=8;
 cout<<linearsearch(arr,sz,target)<<endl;
}