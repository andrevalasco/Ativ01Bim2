#include <iostream>
using namespace std;

int funcao1 (int parametro){
	if (parametro >= 0){
		return 0;
	}else{
		return 1;
	
}
}
int main (){
	int numero = 0;
	cin >> numero;
	
	if (funcao1(numero)){
		cout << "NEGATIVO";
	}else{
		cout << "POSITIVO";
	}
	
	
	return 0;
}