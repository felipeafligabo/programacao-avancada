#include <iostream>
using namespace std;
#include <contaCorrente.h>
#include <contaPoupanca.h>

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
 
 
 // Ex 6 e 7
 /*
Primeira Situa��o 
     � que ocorre em ambos � que n�o h� um construtor vazio
	 Para Conta Corrente e Conta, ent�o uma solu��o seria criar um construtor vazio para Conta Corrente
	 e em seguida para Conta visto que ap�s corrigir o ex6 ira pro erro do ex 7. Contudo 
	 Esse erro n�o vai resolver a situa��o, apenas corrigira o erro de compila��o
	 
	 Para corrigir o erro seria necess�rio:
	 
	  ContaCorrente contasCorrentes[100];// ex 6
 	  Conta contas[100]; // ex 7
	 
 */	
 	
/*
Segunda situa��o
	
    Utilizando a declara��o acima � que � que � criado um vetor de 100 itens e todas 
    ser�o iniciadas, mesmo sem a utiliza��o de todas elas (o que pode ocorrer).
    Para corre��o � necess�rio a utiliza��o de ponteiros e inicializar os objetos 
    conforme necess�rio(Utilizando o new). Conforme c�digo abaixo, ou utilizando um for para dar o new
    em cada posici��o necessaria
    
    ContaCorrente *contasCorrentes[100];// ex 6
	contasCorrentes[1] =  new ContaCorrente(121,"Felipe");
 	
    
 
*/	
 	
/* Terceira situa��o

   	 Conta *contas[100]; // ex7
 	 contas[1] = new Conta(1234,"felipe");
 	 
	O erro ocorre visto que n�o � o correto alocar um objeto de uma classe abstrata,
	uma vez que que � pra ser apenas uma classe de modelo e n�o � para instanciar objetos dela, 
	Ex de motivos de n�o utiliza��o : Classe � modelo, H� metodos n�o implementados
	Para corrigir a situa��o basta utilizar para instanciar os objetos as classes filhas.
	

 	 

*/ 	
 	 
 	 
 	
 // Fim ex 6 e 7 
  
  
  return 0;
}