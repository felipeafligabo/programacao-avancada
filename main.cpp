#include <iostream>
using namespace std;
#include <Conta.h>

int main()
{
	
  
  Conta c1 = Conta(1,"Felipe");
  Conta c2 = Conta(3,"Ligabo");
  
  c1.extrato();
  c1.deposita(150);
 // c1.extrato();
  c1.retira(50);
 // c1.extrato();
  
 // c2.extrato();
  
  //c1.transfere(&c2);
  c1.extrato();
  c2.extrato();
  
  
  
  
  
  
  return 0;
}