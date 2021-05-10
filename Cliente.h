#include <string.h>
#pragma once
using namespace std;
class Cliente {
	
private:
	string _nome;

public:
	// Construtor
	Cliente(string nome): _nome(nome){}	
	// Destrutor
	~Cliente(){};
	
	// Getters e Setters
	void setNome(string nome){
		_nome = nome;
	}
	string getNome(){
		return _nome;
	}
	
};	
	