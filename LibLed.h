  //Includiamo la libreria se non è già stata inclusa
//da un altra libreria
#ifndef LibLed_H
#define LibLed_H

//Includiamo la libreria di Arduino
#include "Arduino.h"

class LibLed
{
   private:
      byte pinGlobal;  // Pin dove è collegato il led

   public:
      void init (byte pinLed);
      void on(void);
      void off(void);
      void blink (unsigned short timeMs);
};

#endif // LibLed_H
