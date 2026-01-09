 #include<iostream>
using namespace std;

int palindromnumber(int N) {
int temp=N;
    int reverse=0;
    while(temp>0){
    int digit=temp%10;
  reverse=reverse*10+digit;
    temp/=10;
    }
    return (reverse==N) ;
    }
int main() {
     
  if(palindromnumber(121)){
  cout << "palindrom number ";
  }
  else{
  cout << " not a palindrom number";
     }
     
     
    
    return 0;
}