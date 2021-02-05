#include <iostream>

struct Fraction
{
   int numerator, denominator;
};

int NumRow[100];

int SimpleNumber( int x, int *nr  ) {//разложение числа Х на простые делители
int i=0;				//результаты заносим в массив по адресу *nr
while (x%2==0) { nr[i]=2; i++;x/=2; } //делим пока делится на 2
int n=i;
for (i=3;i<=x;i+=2)//теперь находим нечетные делители перебором до самого себя
	if (x%i==0) {      nr[n]=i; 
					n++;
					x/=i;  }
return n; }


int NOD(int a,int b){

int NumRow1[100];
int NumRow2[100];

int n1 = SimpleNumber(a,NumRow1);
int n2 = SimpleNumber(b,NumRow2);

std::cout<<"N1;N2-"<<n1<<";"<<n2<<std::endl;

int am,bm;
for (int num1:NumRow1) if (num1 %b)  {am=num1;break;}
for (int num2:NumRow2) if (num2 %a)  {bm=num2;break;}

std::cout<<"num1;num2-"<<am<<";"<<bm<<std::endl;

int i=0;
int n3=1;
  		
int Max1=2;
int Max2=NumRow2[n2];


for (int num1 : NumRow1) if (num1>Max1) Max1=num1;
//for (auto num1 : NumRow1) if (num1==Max1) num1=1;


return Max1;
}


int main ()
{
Fraction a={1,32};
Fraction b={1,57};


std::cout<<" 1/"<<a.denominator<<"+ 1/"<<b.denominator<<"\n";

int i;
for (i=0; i<SimpleNumber(a.denominator,NumRow); i++) std::cout<<NumRow[i]<<' ';
std::cout<<'\n';
for (i=0; i<SimpleNumber(b.denominator,NumRow); i++) std::cout<<NumRow[i]<<' ';
std::cout<<'\n';

std::cout<<NOD(a.denominator,b.denominator)<<"\n";


return 0;
}

