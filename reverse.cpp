#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no.";
    cin>>n;
    int reversedNum=0;
    int rem;
    while(n !=0){
    rem=n%10;
    reversedNum=reversedNum*10+rem;
    n/=10;
    }
    cout<<"reversed no."<<reversedNum;
    return 0;
}