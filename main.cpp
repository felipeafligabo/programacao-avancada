#include <iostream>
using namespace std;
#include <ContaCorrente.h>
#include <ContaPoupanca.h>

int main()
{
	
  
  ContaCorrente c1 = ContaCorrente(1,"Felipe");
  ContaPoupanca c2 = ContaPoupanca(3,"Ligabo");
  
  c1.extrato();
  c1.deposita(500);
  
  c2.extrato();
  c2.deposita(1000);
 // c1.extrato();
 // c1.retira(50);
 // c1.extrato();
  
 // c2.extrato();
  
  //c1.transfere(&c2);
  
  
  c1.aplicaJurosDiarios(10);
  c1.extrato();
  c2.aplicaJurosDiarios(10);
  c2.extrato();
  
  
  
  
  return 0;
}