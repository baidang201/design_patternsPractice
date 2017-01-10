#include "context.h"
#include "strategy.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
   
    Strategy* psA = new ConcreteStrategyA();
    Strategy* psB = new ConcreteStrategyB();
    Context*pc = new Context();

    pc->SetStrategy(psA);
    pc->DoAction();

    pc->SetStrategy(psB);
    pc->DoAction();

    if (NULL != pc)
    {
        delete pc;
    }

    delete psA;
    delete psB;
    getchar();
    return 0;
}