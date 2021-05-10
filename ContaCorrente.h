#include <Conta.h>
using namespace std;
#pragma once


class ContaCorrente : public Conta {
private:
		
public:
	ContaCorrente(int numero): Conta(numero){}
	
	~ContaCorrente();
};
