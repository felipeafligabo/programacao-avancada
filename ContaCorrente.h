#include <Conta.h>
using namespace std;
#pragma once


class ContaCorrente : public Conta {

	
public:
// Construtor
	//ContaCorrente(){}; Para validação ex 6 e 7
	
	ContaCorrente(int numero,string nome): Conta(numero,nome){
		cout << "\n Criando conta " << numero << " do cliente " << nome << endl; // Exercicio 5
	}
	
// Destrutor

	~ContaCorrente(){
		delete _cliente;
	};
	
// Operações
// Parte do exercicio 2	
void aplicaJurosDiarios(int dias){
// Percentual fixo de 1% 
    _saldo += calculaJuros(dias,_saldo,1.0);
}

// Impressao sobrescrita e reaproveitada com ajuste

void extrato(){	
	cout << "----Extrato Conta Corrente ----" << endl;
	Conta::extrato();
}

};
