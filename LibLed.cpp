/*
  LibLed.cpp - Libreria di esempio
*/

#include "LibLed.h"  // Includiamo il file Header

// Inizializzazione
void LibLed::init (byte pinLed)
{
  pinGlobal = pinLed;
  pinMode(pinGlobal, OUTPUT);
}

// Accendo il led
void LibLed::on(void)
{
  digitalWrite(pinGlobal, HIGH);
}

// Spengo il led
void LibLed::off(void)
{
  digitalWrite(pinGlobal, LOW);
}

// Faccio lampeggiare il led
void LibLed::blink (unsigned short periodMs)
{
  on();
  delay(periodMs/2);
  off();
  delay(periodMs/2);
}
