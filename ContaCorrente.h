#include <Conta.h>
using namespace std;
#pragma once


class ContaCorrente : public Conta {

	
public:
	ContaCorrente(int numero,string nome): Conta(numero,nome){}
	
	~ContaCorrente(){
		delete _cliente;
	};
	
	
void aplicaJurosDiarios(int dias){
	// Percentual fixo de 1% 
    _saldo += calculaJuros(dias,_saldo,1.0);
}

// Impressao sobrescrita com ajuste
void extrato(){	
	cout << "----Extrato Conta Corrente ----" << endl;
	Conta::extrato();
}

};
