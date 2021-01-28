// LUIS_HUACHACA_CCOMP2-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Luis Fredy Huachaca Vargas trabajo

#include <iostream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*// EJERCICIO 16

    int val1;
    int val2;
    cout << "escribe el valor 1: ";
    cin >> val1;
    cout << "escribe el valor 2: ";
    cin >> val2;
    cout << val1 + val2 << endl;
    cout << val1 * val2 << endl;
    cout << val1 - val2 << endl;
    cout << val1 % val2 << endl;*/

    /*// EJERCICIO 18

    int val1;
    int val2;
    cout << "number 1: ";
    cin >> val1;
    cout << "number 2: ";
    cin >> val2;

    if (val1 > val2) {
        cout << val1 << " is larger" << endl;
    }
    else if(val2 > val1) {
        cout << val2 << " is larger" << endl;
    }
    else {
        cout << "These numbers are equal." << endl;
    }*/

    /*//EJERCICIO 20

    int radio;
    float pi = 3.14159;
    cout << "escriba el radio: ";
    cin >> radio;
    cout << "Diametro: " << radio * 2 << endl;
    cout << "Circunferencia: " << 2 * pi * radio << endl;
    cout << "Area: " << pi * (radio * radio) << endl;*/

    /*// EJERCICIO 22
    cout << "*****\n****\n***\n **\n*\n " << endl;
    // El código imprime un triangulo invertido con una separación en la penultima fila
    // lo que implica que \n es un salto de linea.*/

    /*// EJERCICIO 24
    int val1;
    int val2;
    cout << "number 1: ";
    cin >> val1;
    cout << "number 2: ";
    cin >> val2;
    if (val1 % 2 == 0) {
        cout << val1 << " es par" << endl;
    }
    else {
        cout << val1 << " es impar" << endl;
    }
    if (val2 % 2 == 0) {
        cout << val2 << " es par" << endl;
    }
    else {
        cout << val2 << " es impar" << endl;
    }
    if ((val1 + val2) % 2 == 0) {
        cout << val1 + val2 << " es par" << endl;
    }
    else {
        cout << val1 + val2 << " es impar" << endl;
    }*/

    /*// EJERCICIO 26

    cout << "* * * * * * * *" << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * *" << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * *" << endl;
    cout << " * * * * * * * *" << endl;
    cout << "* * * * * * * *" << endl;
    cout << " * * * * * * * *" << endl;

    cout << "* * * * * * * * \n * * * * * * * * \n* * * * * * * * \n * * * * * * * * \n* * * * * * * * \n * * * * * * * * \n* * * * * * * * \n * * * * * * * *" << endl;
    */

    /*// EJERCICIO 28
    int num;

    cout << "Enter a four-digit number: ";
    cin >> num;

    cout << num % 10 << " ";
    cout << (num % 100) / 10 << " ";
    cout << (num % 1000) / 100  << " ";
    cout << num / 1000 << " ";*/

    /*// EJERCICIO 30
    
    int peso;
    int altura;
    cout << "Introduzca su peso en kg: ";
    cin >> peso;

    cout << "Introduza su altura en metros: ";
    cin >> altura;
    
    int BMI = peso / (altura * altura);
    
    cout << "BMI values" << endl;
    if (BMI < 18.5) {
        cout << "valor BMI: Underwight";
    }
    else if (18.5 <= BMI) {
        if (BMI <= 24.9) {
            cout << "valor BMI: Normal";
        }
        else if (BMI <= 29.9) {
            cout << "valor BMI: Overweight";
        }
        else if (BMI >= 30) {
            cout << "valor BMI: Obese";
        }
    }*/
    
    /*//EJERCICIO 32

    int edad;
    cout << "Ingrese su edad: ";
    cin >> edad;

    float for1 = 220 - edad;
    float for2 = 208 - (0.7 * edad);
    float for3 = 207 - (0.7 * edad);
    float for4 = 211 - (0.64 * edad);
    cout << "Ratios sugeridos de MHR: " << endl;
    cout << "1: " << for1 << endl;
    cout << "2: " << for2 << endl;
    cout << "3: " << for3 << endl;
    cout << "4: " << for4 << endl;
    float max;
    float min;
    if (for1 > for2) {
        max = for1;
        min = for2;
    
        if (max < for3) {
            max = for3;
        }
        if (max < for4) {
            max = for4;
        }
        if (min > for3) {
            min = for3;
        }
        if (min > for4) {
            min = for4;
        }

    }
    else {
        max = for2;
        min = for1;
        if (max < for3) {
            max = for3;
        }
        if (max < for4) {
            max = for4;
        }
        if (min > for3) {
            min = for3;
        }
        if (min > for4) {
            min = for4;
        }
    }

    cout << "MHR maximo: " << max << endl;
    cout << "MHR minimo: " << min << endl;
    cout << "Rango recomendado de MHR segun su edad (" << min << " - "<< max << ")" << endl;*/

    

    
    return 0;
}
