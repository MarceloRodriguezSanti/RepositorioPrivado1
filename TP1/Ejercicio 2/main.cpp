#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, raiz;
    cout << "Introduzca el coeficiente de 2do grado" << endl;
    cin >> a;
    cout << "Introduzca el coeficiente de 1er grado" << endl;
    cin >> b;
    cout << "Introduzca el coeficiente independiente" << endl;
    cin >> c;
    raiz = sqrt(pow(b,(float)2) - 4*a*c);
    if (pow(b,(float)2) - 4*a*c > 0)
       cout << "La ecuacion cuadratica tiene dos soluciones: " << (-1*b + raiz)/(2*a) << " y " << (-1*b - raiz)/(2*a) << endl;
    else
     {
       if (pow(b,(float)2) - 4*a*c == 0)
          cout << "La ecuacion cuadratica tiene una unica solucion: " << (-1*b)/(2*a) << endl;
       else
         cout << "La ecuacion cuadratica no tiene solucion" << endl;
     }
    return 0;
}
