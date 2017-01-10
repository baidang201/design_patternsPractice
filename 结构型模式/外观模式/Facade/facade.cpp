#include "facade.h"
#include <iostream>
using namespace std;


Subsystem1::Subsystem1()
{

}

Subsystem1::~Subsystem1()
{

}

void Subsystem1::Operation()
{
    cout << "Subsystem1 operation..." << endl;
}


Subsystem2::Subsystem2()
{

}

Subsystem2::~Subsystem2()
{

}

void Subsystem2::Operation()
{
    cout << "Subsystem2 operation..." << endl;
}

Subsystem3::Subsystem3()
{

}

Subsystem3::~Subsystem3()
{

}

void Subsystem3::Operation()
{
    cout << "Subsystem3 operation..." << endl;
}

Facade::Facade()
{
    this->_subs1 = new Subsystem1();
    this->_subs2 = new Subsystem2();
    this->_subs3 = new Subsystem3();
}

Facade::~Facade()
{
    delete _subs1;
    delete _subs2;
    delete _subs3;
}

void Facade::OperationWrapper()
{
    this->_subs1->Operation();
    this->_subs2->Operation();
    this->_subs3->Operation();
}