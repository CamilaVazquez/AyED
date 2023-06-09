#include <iostream>
using namespace std;

int main()
{

int pi;
int it=0;
int nominador=-4;
int denominador=1;


    for (pi=0; pi==3.141592; it++)
    {
        pi=(nominador/denominador);
        nominador=-(nominador);
        denominador= denominador + 2;
    }

cout << "el valor de pi es " << pi << endl;
cout << "Se realizaron " << it << " iteraciones" << endl;

return 0;
}
