#include <iostream>

int main(void)

{

int a,b;
std::cout<<"a=";
std::cin>>a;
std::cout<<" b=";
std::cin>>b;
if (a>b)  while (a%=b)  b=a; else  while (b%=a) a=b;
std::cout<<" a="<<a<<" b="<<b<<"\n";
return 0;
}
