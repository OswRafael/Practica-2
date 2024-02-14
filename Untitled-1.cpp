#include <iostream>
#include <math.h>
 
 float a, b, c, cuadrado, factor1, factor2, raiz, x1, x2;
using namespace std;

int main()
{
      if(a==0){
            cout<<"a no puede ser cero";
      }

      else{
            cuadrado= b*b;
            factor2=4*a*c;
      }
      if (factor2<cuadrado){
            cout<<"no se puede calcular";
      }
      else{
            factor1=2*a;
            raiz=sqrt(cuadrado-factor2);
            x1=(-b-raiz)/factor1;
            x2=(+b+raiz)/factor1;
      }
      return 0;
}