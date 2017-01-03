#include "AbstractFactory.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    AbstractFactory* cf1 = new ConcreteFactory1();
    AbstractFactory* cf2 = new ConcreteFactory2();

    cf1->CreateProductA();
    cf1->CreateProductB();

    cf2->CreateProductA();
    cf2->CreateProductB();

    getchar();
    return 0;
}