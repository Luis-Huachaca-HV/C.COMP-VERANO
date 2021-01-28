//  Luis Fredy Huachaca Vargas
//

#include <iostream>
#include <string>
using namespace std;

// función para el ejercicio 28
int potencia(int a, int b) {
	int result = a;
	for (int i = 0; i < b; i++) {
		result *= a;

	}
	return result;

}


int main()
{

	/*//Ejercicio 24
	int x;
	int y;
	cin >> x;
	cin >> y;
	if (x == 5)
	if (y == 15)
	cout << "x es 5, " << " y es 15" << endl;
	if (x == 15)
	if (y == 5)
	cout << "x es 15, " << " y es 5" << endl;
	*/


	/*//Ejercicio 26

	int size;
	cout << "Tamaño del cuadrado: ";
	cin >> size;

	for (int i = 0; i < size; i++) {

		if (i == 0) {
			for (int j = 0; j < size; j++) {
				cout << "*" << "";
			}
			cout << "\n";
		}

		else if (i == size - 1) {
			for (int j = 0; j < size; j++) {
				cout << "*" << "";
			}
			cout << "\n";
		}
		else {
			cout << "*";
			for (int z = 0; z < size - 2; z++) {
				cout << " ";
			}
			cout << "*\n";
		}
	}*/



	/*// Ejercicio 27

	int num;
	cout << "Inserte un numero de 5 cifras: ";
	cin >> num;
	if (num / 10000 == num % 10) {
		if ((num / 1000) % 10 == (num % 100) / 10) {
			cout << num << " es palindromo" << endl;
		}
		else {
			cout << num << " no es palindromo" << endl;
		}
	}
	else {
		cout << num << " no es palindromo" << endl;
	}*/

	/*// Ejercicio 28

	int n;

	cout << "Ingresa el numero binario: ";
	cin >> n;

	cout << "en numero decimal es: ";
	int numero =0;
	int pos = 0;
	int bit;
	while (n != 0) {
		bit = n % 10;
		n /= 10;
		numero += bit * potencia(2, pos);
		++pos;
	}
	cout << numero/2;
	return 0;*/

	/*//Ejercicio 30
	long suma;

	long a = 0;
	long b = 1;
	while (true) {
		if (a == 0) {
			cout << a << " ";
		}

		suma = a + b;
		a = b;
		b = suma;
		cout << suma << " ";
	}*/

	/*//Ejercicio 32
	int x = 1;
	int y = 2;
	cout << ++(x + y);
	//según el error que arroja, la expresión debe ser un valor modificable, claro podemos modificar esa expresión
	// pero solo modificando anteriormente x y/o y, lo cual no es una modificación directa a la expresión, lo que haria
	// sería crear una variable de suma =  x + y y ahí modificar la variable suma.
	int x = 1;
	int y = 2;
	int suma = x + y;
	cout << ++(suma);*/

	/*//Ejercicio 33
	double a;
	double b;
	double c;
	cout << "Ingrese las medidas de los lados: ";
	cin >> a ;
	cout << ", " << "";
	cin >> b;
	cout << ", " << "";
	cin >> c;
	bool valor = true;
	if ((a + b > c) && (a + c > b) && (b + c > a)) {
		cout << a << ", " << b << ", " << c << " si representan los lados de un triangulo" << endl;

	}
	else {
		cout << a << ", " << b << ", " << c << " no representan los lados de un triangulo" << endl;
	}*/

	/*//Ejercicio 35
	int val;
	cout << "factorial de: ";
	cin >> val;
	int copia_val = val;
	int suma = 1;

	for (val; val > 0; val--) {
		suma *= val;
	}
	cout << copia_val << "!" << " = " << suma;*/


}

