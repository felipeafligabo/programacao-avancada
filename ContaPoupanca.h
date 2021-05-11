#include <Conta.h>
using namespace std;
#pragma once


class ContaPoupanca : public Conta {
		
public:
	ContaPoupanca(int numero,string nome): Conta(numero,nome){}
	
	~ContaPoupanca(){
		delete _cliente;
	};
		
void aplicaJurosDiarios(int dias){
	// Percentual fixo de 8% 
    _saldo += calculaJuros(dias,_saldo,8.0);
}

// Impressao sobrescrita com ajuste
void extrato(){	
	cout << "----Extrato Conta Poupanca ----" << endl;
	Conta::extrato();
}

};
