#include <iostream>
using namespace std;
#include <ContaCorrente.h>
#include <ContaPoupanca.h>

int main()
{
	
// Exercicio 3
	ContaCorrente cc1 = ContaCorrente(1,"Felipe");
	ContaCorrente cc2 = ContaCorrente(2,"Joao");
  
	ContaPoupanca cp1 = ContaPoupanca(3,"Chaua");
	ContaPoupanca cp2 = ContaPoupanca(4,"Fernando");
  
	// Depositos
	
	cc1.deposita(100); cc2.deposita(200);
  	cp1.deposita(300); cp2.deposita(400);
   
    // Retiradas (Metade de cada)
	cc1.retira(50); cc2.retira(100);  
	cp1.retira(150); cp2.retira(200); 
	
	// Extrato
	cout << "\n\nDeposito e Retirada" << endl;
	cc1.extrato(); cc2.extrato();  
	cp1.extrato(); cp2.extrato(); 
	
	cout << "\n\nTransferencia" << endl;
	// Transfere (valor total 50) 
    cc1.transfere(&cc2);
    cc1.extrato(); cc2.extrato(); 
    
    
    // Juros
    cout << "\n\n Aplicacao Juros" << endl;
    cc1.deposita(500);
    cc1.aplicaJurosDiarios(10);
    cc1.extrato();
	
 // Fim exercicio 3 
  
  
  return 0;
}