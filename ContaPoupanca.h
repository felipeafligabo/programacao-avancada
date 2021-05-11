#include <Conta.h>
using namespace std;
#pragma once


class ContaPoupanca : public Conta {
		
public:
// Construtor
	ContaPoupanca(int numero,string nome): Conta(numero,nome){
		cout << "\n Criando conta " << numero << " do cliente " << nome << endl; // Exercicio 5
	}
// Destrutor
	~ContaPoupanca(){
		delete _cliente;
	};

// Operações
// Parte do exercicio 2	
void aplicaJurosDiarios(int dias){
	// Percentual fixo de 8% 
    _saldo += calculaJuros(dias,_saldo,8.0);
}

// Impressao sobrescrita e reaproveitada com ajuste

void extrato(){	
	cout << "----Extrato Conta Poupanca ----" << endl;
	Conta::extrato();
}

};
