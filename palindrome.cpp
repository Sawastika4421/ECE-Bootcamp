#include<iostream>
using namespace std;

int main(){
    int n;
    int temp;
    cout<<"enter the no.";
    cin>>n;
    temp=n;
    int reversedNum=0;
    int rem;
    while(n !=0){
    rem=n%10;
    reversedNum=reversedNum*10+rem;
    n/=10;
    }
    //cout<<"reversed no."<<reversedNum;
    if(reversedNum==temp){
        cout<<temp<<" is palindrome No."<<endl;
    }
    else{
    cout<<temp<<" is not palindrome No."<<endl;
    }
}