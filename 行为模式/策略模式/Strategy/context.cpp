#include "context.h"
#include "strategy.h"
#include <iostream>
using namespace std;

Context::Context()
 :_stg(NULL)
{
    
}

Context::~Context()
{

}

void Context::SetStrategy(Strategy * stg)
{
    _stg = stg;
}

void Context::DoAction()
{
    if (_stg)
    {
        _stg->AlgrithmInterface();
    }
}