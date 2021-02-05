#include <iostream>

int main(void)

{

int t,a,b;
std::cout<<"a=";
std::cin>>a;
std::cout<<" b=";
std::cin>>b;
std::cout<<"\n";

do  {

t=b;
b=a%b;
a=t;
std::cout<<" a="<<a<<" b="<<b<<"\n";

} while (b);

//std::cout<<" a="<<a<<" b="<<b<<"\n";
return a;

}
