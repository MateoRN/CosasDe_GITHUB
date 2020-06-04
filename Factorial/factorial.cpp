#include <iostream>
#include <fstream>
#include <cmath>
#include "stdio.h"

int Factorial(int numero);

int main(){

// Se crea una función llamada factorial que calcula de forma recursiva el factorial de un numero. En el main la llamamos y la usamos
// usando como parámetro el número que ingresa el usuario.
    
    std::cout << "Programa para el calculo del factorial del número que entra como parámetro (Ingrese el número):" << std::endl;
    int numero ;
    std::cin >> numero;
    
    int num;
    
    num = Factorial(numero);
    std::cout << num << std::endl;
    return 0;
}

int Factorial(int numero){
    
    if(numero > 1){
        numero = numero * Factorial(numero-1); 
  }
    return numero;
}




