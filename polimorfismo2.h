//ENCAPSULAMENTO - DEFINIÇÕES E OPERAÇÕES DE UM TIPO ABSTRATO DE DADOS

#ifndef POLIMORFISMO2_H
#define POLIMORFISMO2_H

// virtual members
#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b; }
    virtual int area ()
      { return 0; }
};
//ABAIXO SE APLICA O CONCEITO DE HERANÇA, ONDO OS TIPOS RECTANGLE E TRIANGLE HERDAM AS DEFINIÇÕES DE POLYGON.

class Rectangle: public Polygon {
  public:
    int area ()
      { return width * height; }
};

class Triangle: public Polygon {
  public:
    int area ()
      { return (width * height / 2); }
};

#endif // POLIMORFISMO2_H
