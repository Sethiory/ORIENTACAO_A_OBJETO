#include <iostream>
#include "polimorfismo2.h"
using namespace std;

int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon poly;
    Polygon * ppoly1 = &rect;
    Polygon * ppoly2 = &trgl;
    Polygon * ppoly3 = &poly;
    ppoly1->set_values (4,5);
    ppoly2->set_values (4,5);
    ppoly3->set_values (4,5);
    //AS VARIÁVEIS POLIMÓRFICAS ACESSAM SEUS MÉTODOS DE CALCULO DA ÁREA, SOBRESCREVENDO A ÁREA DA CLASSE BASE.
    cout << ppoly1->area() << '\n';
    cout << ppoly2->area() << '\n';
    cout << ppoly3->area() << '\n';

    cout<<trgl.area()<<'\n';
    cout<<rect.area()<<'\n';
    return 0;
}
