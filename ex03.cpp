#include <iostream>
using namespace std;

int valor(int num1, int num2, int num3){
	if (num1 > 2 && num1 >3){
		cout << "O maior numero eh: " << num1;
	}else if (num2 > 1 && num2 > num3) {
		cout << "O maior numero eh: " <<num2;
	}else if (num3 > 1 && num3 > num2) {
		cout << "O maior numero eh: " << num3;
	}
}

int main (){
	int num1,num2,num3;
	
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	
	cout << "Digite o segundo numero: ";
	cin >> num2;
	
	cout << "Digite o terceiro numero: ";
	cin >> num3;
	
	valor(num1,num2,num3);
}