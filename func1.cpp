#include "1.hpp"
#include <iostream>

void printFract(Fraction fraction )
	{ std::cout  << fraction.numerator << "/" << fraction.denominator << "\n";}

int low_cd (Fraction a, Fraction b )//нахождение наименьшего общего знаменателя
{
int i,j,max;
if (a.denominator<b.denominator) {max=b.denominator;} else {max=a.denominator;}
for (i=2;i<=max;i++)
for (j=2;j<=max;j++) if (a.denominator / i == b.denominator / j) return i*j;
return 0;
}


int sumFract(Fraction a, Fraction b )//сложение дробей
{


return 0;
}


int  subFract(Fraction a, Fraction b )//вычитание дробей
{
return 0;
}


int mulFract(Fraction a, Fraction b )//умножение дробей
{
return 0;
}

int divFract(Fraction a, Fraction b )//деление дробей
{
return 0;
}
