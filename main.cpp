#include <iostream>
using namespace std;

int main(){
	int num1, num2, oper, result;
	
	cout<<"Esto es una calculadora Basica en C++ \n";
	cout<<"Ingresa el Primer Numero: \n";
	cin>>num1;
	cout<<"Ingresa el Segundo Numero: \n";
	cin>>num2;
	cout<<"Ahora ingresa la Operacion: \n";
	cout<<"1|Suma \n2|Resta \n3|Multiplicacion \n4|Division \n";
	cin>>oper;
	
	if(oper == 1){
		result = num1 + num2;
		cout<<"El resultado es: "<<result;
		}
	if(oper == 2){
		result = num1 - num2;
		cout<<"El resultado es: "<<result;
		}
	if(oper == 3){
		result = num1 * num2;
		cout<<"El resultado es: "<<result;
		}
	if(oper == 4){
		result = num1 / num2;
		cout<<"El resulktado es: "<<result;
		}
}
