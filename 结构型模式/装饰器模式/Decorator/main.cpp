#include "Decorator.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    Component* com = new ConcreteComponent();

    Component* decA = new ConcreteDecoratorA(com);
    decA->Operation();


    Component* decB = new ConcreteDecoratorB(decA);
    decB->Operation();

    delete decA;
    delete decB;

    getchar();

    return 0;
}