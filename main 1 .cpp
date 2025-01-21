#include <iostream>
using namespace std;

int main() {
int chocolate=0;
int cheesecake=0;
  int voto;

 cout << "Ingrese su voto (1=chocolate,2=cheesecake)\n";
  cin >> voto;

  while(voto==1 || voto==2)

    if(voto==1){
      chocolate++;
    }
   else if(voto==2){
     cheesecake++;
   }
   else if(voto==0){
     cout << "Total de votos es: Total de votos es:" << chocolate << "por la torta de chocolate y " << cheesecake << " por cheesecake";
   }
    else if  (cheesecake==2 && chocolate == 2){
      
    }
    
    return 0;
}
  

 
  




















