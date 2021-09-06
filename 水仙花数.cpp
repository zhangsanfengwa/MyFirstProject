#include "iostream"
using namespace std;
int add(int a,int b)
{
	return a + b;
}
int main(){
  int num,a,b,c;
  for(num=100;num<1000;num++){
    
    
    a = num/100;
    b = num%10;
    c = num/10%10;

    if(a*a*a+b*b*b+c*c*c==num){
      cout << num << endl;
    }
  }
  

  system("pause");
  return 0;
}