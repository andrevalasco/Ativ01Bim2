#include <iostream>
using namespace std;

float coeficientes (float a, float b, float c){
	float delta = ((b*b) -(4 * a * c));
	cout << "O valor de Delta eh: " << delta;
}
int main (){
	float a,b,c;
	cout << "Escreva o valor de A: ";
	cin >> a;
	
	cout << "Escreva o valor de B: ";
	cin >> b;
	
	cout << "Escreva o valor de C: ";
	cin >> c;
	
	coeficientes(a,b,c);
	
	return 0;
}