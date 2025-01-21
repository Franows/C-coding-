#include <iostream>
using namespace std;

int main() { 
  int puntaje,puntajedelmejor,saltos;
  puntaje=0;
  cout << "Ingrese la cantidad de golpes precisos: \n ";
  cin >> saltos;
  cout << "Ingrese el puntaje del mejor jugador: \n";
  cin >> puntajedelmejor;
  
  if(saltos<50){ 
    cout << "Lograste un total de 400 puntos";
    puntaje=400;
    }
   
else if (saltos>50 && saltos<149){
cout << "Lograste un total de 680 puntos \n";
  puntaje=680;

  }
else if  (saltos>150){
cout << "Lograste un total de 1000 puntos;\n";
  puntaje=1000;

  }
  if (puntaje>puntajedelmejor){
    cout << "Superaste al mejor jugador!\n";
  }

 



return 0;
}
