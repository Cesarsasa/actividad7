#include <iostream>
using namespace std;

//80 lineas de codigo en 10 lugares distintos =800  lineas de codigo
//de las cuales 80 son iguales
//crean una funcion o un metodo = y lo mandan a llmar 10 veces =80
int suma(int num1, int num2){
	int resultado=0;
	resultado=num1+num2;
	return resultado;
}

int resta(int num1, int num2){
	int resultado=0;
	resultado=num1-num2;
	return resultado;
}
	main(){
		
		cout<<suma(10,20)<<endl;
		cout<<resta(50,70)<<endl;
	
	system("pause");
}

#include <iostream>
using namespace std;

//funcion que sume dos valores 
int suma(int num1, int num2){
	int resultado=0;
	resultado=num1+num2;
	return resultado;
}

int suma(int num1, int num2,int num3){
	int resultado=0;
	resultado=num1-num2+num3;
	return resultado;
}
	main(){
		
		cout<<suma(10,20,40)<<endl;
		cout<<suma(10,20)<<endl;
	
	system("pause");
}
#include <iostream>
using namespace std;

//funcion que sume dos valores 
int suma(int num1, int num2,int num3){
	int resultado=0;
	resultado=num1-num2+num3;
	return resultado;
}

//metodo y envio de parametros por referencia
void suma(int &num1, int &num2){
	int resultado=0;
	num1+=1;
	num2+=1;
	resultado=num1+num2;
	cout<<resultado<<endl;
}

	main(){
		
		int a=10, b=20;
		suma(a,b);
		cout<<"a: "<<a<<endl;
		cout<<"b: "<<b<<endl;
	
	system("pause");
}