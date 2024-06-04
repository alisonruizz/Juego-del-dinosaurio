#include "Pterodactilo.h"

Pterodactilo::Pterodactilo(int posicionInicial) {
  x= posicionInicial;
  estado = 0;  
  y = 0;    
}

void Pterodactilo::mover() {    
   if(x > 0) {
    x = x - 1;
  }
  else {
    x = random(10,12);
  }  
}

void Pterodactilo::volar() {    
    y = 0;
    if(estado == 5) {
      estado = 6;
    } 
    else {
      estado = 5;
    } 
}

int Pterodactilo::obtenerEstado() {
  return estado;
}

int Pterodactilo::obtenerPosicion() {
  return x;
}
