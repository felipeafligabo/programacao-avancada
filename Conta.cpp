#include <Conta.h>
using namespace std;


// Funções inline para impressão de mensagens
inline void imprimeTransferenciaOK(){
	cout << "\nRealizado transferencia entre as contas selecionadas" << endl;
}
inline void imprimeTransferenciaERRO(){
	cout << "\nVoce nao possui esse saldo, tente novamente ou aperte -1 para sair !!! " << endl;
}

void Conta::transfere(Conta *contaDestino){		
	
	int valor = 0;
	do{
		cout << "\nValor da transferencia: ";
		cin  >> valor;
		
		if (valor <= _saldo && valor != -1){
			contaDestino->deposita(valor);
		   	this->retira(valor);
		   	imprimeTransferenciaOK();
		   	break;
		}
		if(valor == -1){
			break;
		}
		else{ 
			imprimeTransferenciaERRO();
		}	
	}while(valor > getSaldo());
	
	
		
}