// 3KLSC-GustavoJonapa-10.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int sumaRecursiva(int n)
{
	if (n < 9)
		return n;
	else
		return sumaRecursiva(n / 10) + n % 10;
}


int sumaIterativa(int n)
{
	int suma = 0;

	while (n > 9)
	{
		suma += n % 10;
		n /= 10;
	}
	return(suma + n);
}

int main()
{
	int Numero;
	cout << "Ingresar el numero: ";
	cin >> Numero;

		cout << "Resultado de la suma recursiva: " << sumaRecursiva(Numero) << endl;
		cout << "Resultado de la suma iterativa: " << sumaIterativa(Numero) << endl;
}
