#include<iostream>
using namespace std;
int main(){
  int i, n;
  bool isPrime=true;

  cout<<"Enter a positive integer:";
  cin>>n;

  if(n==0|| n==1){
    isPrime=false;
  }
  else{
    for(int i=2; i<=n/2; i++){
      if(n%i==0){
        isPrime=false;
        break;
      }
    }
  }

  if(isPrime)
  cout<<n<<" "<<"is prime number."<<endl;
  else
  cout<<n<<" "<<"is not prime number."<<endl;
  return 0;
}