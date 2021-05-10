#include <Conta.h>
using namespace std;
#pragma once


class ContaPoupanca : public Conta {
private:
		
public:
	ContaPoupanca(int numero): Conta(numero){}
	
	~ContaPoupanca();
};
