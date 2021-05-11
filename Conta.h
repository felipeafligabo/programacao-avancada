#include <Cliente.h>
#include <iostream>
#include <iomanip>
#pragma once
using namespace std;


// Formula -> ( (percentual por dia * quantidade de dias) * saldo ) / 100
// Parte do exercicio 2	
inline double calculaJuros(int dias,double valor,double percentual){
	return ( ( (percentual/100) * dias ) * valor ) / 100;
}  

// Classe abstrata

class Conta {
		
protected:	
  int _numero;     
  double _saldo;  

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

// Getters , Não declarado setters, visto que não é seguro a liberdade de alterar a conta e numero

double getNumero() const {
	return _numero;
}

double getSaldo() const {
	return _saldo;
}

  // Operações
  
void retira(float quantia){
	_saldo -= quantia;
}

void deposita(float quantia){
  _saldo += int(quantia);
}

// Apenas modelo separado em cpp devido necessidade de validações

void transfere(Conta *contaDestino);

// Impressao padrão

void extrato(){	
       cout << " Ola " << _cliente->getNome() << endl;
	   cout << "Conta: " << _numero << endl;
	   cout << fixed << setprecision(2);
	   cout << "Saldo: " << _saldo << endl << endl;
}


// Metodo virtual para classe abstrata

virtual void aplicaJurosDiarios(int dias){
	cout << "Não utilizar metodo não implementado na classe pai" << endl;
};

};