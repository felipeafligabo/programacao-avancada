#include <string>
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

string getNome() const {
	return _nome;
}
	
};	
	