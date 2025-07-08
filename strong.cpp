#include<iostream>
using namespace std;

int main(){
    int n,temp,digit;
    int sum=0;
    cout<<"Enter a no.";
    cin>>n;
    temp=n;

    while(temp>0){
        digit=temp%10;

    int fact=1;
    for(int i=1; i<=digit; i++){
        fact=fact*i;
    }

    sum=sum+fact;
    temp/=10;
    }

    if(sum==n)
    cout<<n<<" is a strong no."<<endl;
    else
    cout<<n<<" is not strong no.";
}