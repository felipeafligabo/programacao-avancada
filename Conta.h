#include <Cliente.h>
#pragma once
using namespace std;

class Conta {
		
private:	
  int _numero;     
  int _saldo;  
  
  // Conta <> 1 ----- 1 Cliente
  Cliente *_cliente;
  
public:  
 	 
  // Construtor	 
  Conta(int numero, string nome): _numero(numero) ,_saldo(0){
  	_cliente = new Cliente(nome);
  }
  
  
  // Destrutor
  ~Conta(){
	  delete _cliente;
  }; 
  
  void retira(float quantia){
	_saldo -= int(quantia);
  }

void deposita(float quantia){
  _saldo += int(quantia);
}
	
void transfere(Conta *contaDestino){		
	
	// mudar forma para tirar do .h
	int valor = 0;
	cout << "Valor da transferencia: ";
	cin  >> valor;
	cout << endl;
	
	if (valor <= _saldo){
		contaDestino->_saldo += valor;
	   	_saldo -= valor;
	   	cout << "Realizado transferencia da Conta(" << _numero <<\
		") para conta(" << contaDestino->_numero << ")." << endl;
	}else{ 
		cout << "Voce nao possui esse saldo !!! Nao foi possivel realizar a acao, Obrigado e ate logo " << endl;
	}
	
	
}

void extrato(){
	
       cout << "------Extrato----" << endl;
       cout << " Ola " << _cliente->getNome() << endl;
	   cout << "Conta: " << _numero << endl;
	   cout << "Saldo: " << _saldo<< endl << endl;
}

void aplicaJurosDiarios(int dias){
	
}

};