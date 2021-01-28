// Practica2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>
#include "Practica2.h"

using namespace std;



/*//para el problema 6.42
void sumadepuntos(Punto pA, Punto pB) {

    Punto pres(pA.get_x() + pB.get_x(), pA.get_y() + pB.get_y());
    pres.print();
}*/

/*//EJERCICIO 7.13

bool esta_atras(int arr[], int tam, int val) {
    for (int z = 0; z < tam; z++)
        if (arr[z] == val)
            return true;
    return false;
}
//EJERCICIO 7.14
bool esta_atras(vector<int> arr, int tam, int val) {
    for (int z = 0; z < arr.size(); ++z)
        if (arr[z] == val)
            return true;
    return false;
}*/
}

/*// Ejercicio 7.30

void print_arr(int arr[], int i, int d) {
    if (i == d) {
        return ;
    }
    else
    {
        cout << arr[i] << " ";
        print_arr(arr, i += 1, d);
    }
}*/


/*EJERCICIO 6.49
void trplebyvalue(int val) {
    val = val * 3;
    
}
void tripleByReference(int* val) {
    *val = *val * 3;
}*/

/*
// Para el insertion sort
//void insertion_sort(int lista[], int tam);

//Para el quick sort
int partition(int lista[], int i, int d);
void quickSort(int lista[], int i, int d);*/


int main(){
    /*// ejercicio 6.42
    Punto pA(1, 1);
    Punto pB(2, 2);
    sumadepuntos(pA, pB);*/





    /*
    // ejercicio 6.49
    int a = 5;

    cout << a << endl;
    trplebyvalue(a);
    cout << " value " << a << endl;
    tripleByReference(&a);
    cout << "reference " << a << endl;*/


    /*// Ejericcio 7.13
    
    
    int arr[20];
    for (int b = 0; b < 20; b++) {
        arr[b] = 0;
    }
    bool bol = true;
    int i = 0;
    cout << "ingrese numeros entre 10 y 100" << endl;
    while (i < 20) {
        cin >> arr[i];
        //cout << arr[i] << endl;

        if ((arr[i] >= 10) && (arr[i] <= 100)) {
            if (esta_atras(arr, i, arr[i]) == true) {
                cout << "Ingrese un numero que no haya puesto antes: ";
                cin >> arr[i];
                i++;
            }
            else {
                //cin >> arr[i];
                i++;
            }
        }
        else {
            cout << "ingrese de otro  valor entre 10 y 100: " << " ";
            cin >> arr[i];
            i++;
        }

        }
    cout << "los valores no duplicados, 0 no cuenta" << endl;
    for (int b = 0; b < 20; b++)
        cout << arr[b] << " ";*/
    
    /* // Ejercicio 7.14
 
    const size_t size = 20;
    size_t subscript = 0;
    vector< int > arr;

    cout << "ingrese numeros entre 10 y 100: \n";
    // get 20 nonduplicate integers in the range between 10 and 100
    unsigned int i = 0;
    //for (int b = 0; b < 20; b++) 
        //arr[b] = 0;
    int val;
    while (i < 20)
    {
        cin >> val;
        //cout << arr[i] << endl;

        if ((val >= 10) && (val <= 100)) {
            if (esta_atras(arr, i, val) == true) {
                cout << "Ingrese un numero que no haya puesto antes: ";
                cin >> val;
                i++;
            }
            else {
                arr.push_back(val);
                i++;
            }
        }
        else {
            cout << "ingrese de otro  valor entre 10 y 100: " << " ";
            cin >> val;
            i++;
        }

    }
    cout << "los valores no duplicados, 0 no cuenta" << endl;
    for (int b = 0; b < arr.size(); ++b)
        cout << arr[b] << " ";
    
    return 0;
}*/



    /*//Ejercicio 7.30
    int ar[5] = { 1,2,3,4,5 };
    print_arr(ar, 0, 5);
    */





    // --------ALGORITMOS-----DE-------ORDENAMIENTO---------------
    //INSERTION SORT
    /*int lista[5] = { 5,4,3,2,1 };
    insertion_sort(lista, 5);*/

    //QUICK SORT
    /*int lista[5] = { 5,4,3,2,1 };

    quickSort(lista, 0, 4);
    for (int i = 0; i < 5; i++) {
        cout << lista[i] << " ";
    }*/
   

    return 0;

}


// --------ALGORITMOS-----DE-------ORDENAMIENTO---------------
    //INSERTION SORT
/*void insertion_sort(int lista[], int tam) {
    for (int i = 0; i < tam; i++) {
        int llave = lista[i];
        int j = i - 1;
        while ((j >= 0) && (llave < lista[j])) {
            lista[j + 1] = lista[j];
            j -= 1;
        }
        lista[j + 1] = llave;
    }
    for (int z = 0; z < tam; z++) {
        cout << lista[z] << " ";
    }
}
*/

    //QUICK SORT
/*
int partition(int lista[], int i, int d) {
    int ini = i;
    int fin = d;
    int pivote = lista[i];
    int temp = lista[ini];
    while (ini < fin) {
        while ((ini <= d) && (lista[ini] <= pivote)) {
            ini += 1;
        }
        while ((fin >= i) && (lista[fin] > pivote)) {
            fin -= 1;
        }
        if (ini < fin) {
            temp = lista[ini];
            lista[ini] = lista[fin];
            lista[fin] = temp;
        }
    }
    temp = lista[fin];
    lista[fin] = lista[i];
    lista[i] = temp;
    return fin;
}

void quickSort(int lista[], int i, int d) {
   
    if (i < d) {
        int pi = partition(lista, i, d);
        quickSort(lista, i, pi - 1);
        quickSort(lista, pi + 1, d);
    }
}
*/