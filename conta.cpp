#include <conta.h>
using namespace std;


// Fun��es inline para impress�o de mensagens

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
		
		// Valida se tem saldo a ser retirado e utiliza fun��es de deposito e e retirada para movimentar
		if (valor <= _saldo && valor != -1){
			contaDestino->deposita(valor);
		   	this->retira(valor);
		   	imprimeTransferenciaOK();
		   	break;
		}// Encerra conforme solicita��o
		if(valor == -1){
			break;
		} // Imprime mensagem de erro e volta o loop conforme do while
		else{ 
			imprimeTransferenciaERRO();
		}	
	}while(valor > getSaldo());
	
	
		
}