#ifndef Pterodactilo_h
#define Pterodactilo_h
#include "Arduino.h"

class Pterodactilo {
  private:    
    int estado;
    int x, y;        

  public:
    Pterodactilo(int posicionInicial);
    int obtenerEstado();
    void volar(); 
    void mover(); 
    int obtenerPosicion();  
};

#endif