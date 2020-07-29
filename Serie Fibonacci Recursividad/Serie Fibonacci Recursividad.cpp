#include <iostream>
using namespace std;

//Fibonacci 

int Fibonacci(int x) {
	
	if (x <= 2) { return 1; }

	int y = 0;
	int aux1=1, aux2=1;

	//este bucle tiene que hacer x-2 vueltas debido a que el cado base es cuando x<=2
	for (int i = 0; i != x-2; i++) { 
		y = aux1 + aux2;
		aux1 = aux2;
		aux2 = y;
    }

	return y;
}


//Fibonacci Recursiva

int FibonacciR(int x) {

	int y = 0;

	if (x <= 2) { return 1; }

	y = FibonacciR(x - 1) + FibonacciR(x - 2);

	return y;
}




int main(){
	int x = 8;
	
	cout << "El numero conrrespondiente a la posicion x en la serie de Fibonacci es " << FibonacciR(x) << endl;

	cout << "El metodo sin recursividad confirma que el numero es " << Fibonacci(x) << endl;
	system("pause");
	return 0;
}
