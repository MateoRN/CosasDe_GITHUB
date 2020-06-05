#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;


int main(){
    
    
// Condiciones iniciales del problema ( vi = 20 m/s y Hi = 8.5 m), gravedad e intervalos de tiempo para el méttodo de Runge-Kutta.
    
    
    double dt = 0.01;
    double tmax = 5;
    double g = - 9.81;
    double v = 20;
    double t = 0;
    double H = 8.5;
    int n = 0;
    
    std::cout << t << " " << H << std::endl;
        
// Se usa el algoritmo de runge-kutta para calcular la posición en fución del tiempo. En cada iteración se calcula la velocidad usando la aceleración constante de la gravedad y con la velocidad se calcula la posición.
        
    while(H>0){
        
        n = n + 1;
        t = n * dt;
        v = v + g*dt;
        H = H + v*dt;
        
        std::cout << t << " " << H << std::endl;   
  }
 
    
}