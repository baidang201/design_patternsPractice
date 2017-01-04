#include "Decorator.h"
#include <iostream>

Component::Component()
{

}

Component::~Component()
{

}

void Component::Operation()
{

}

ConcreteComponent::ConcreteComponent()
{

}

ConcreteComponent::~ConcreteComponent()
{

}

void ConcreteComponent::Operation()
{
    std::cout << "ConcreteComponent operation..." << std::endl;
}

Decorator::Decorator(Component* com)
{
    this->_com = com;
}

Decorator::~Decorator()
{
    
}

void Decorator::Operation()
{

}

ConcreteDecoratorA::ConcreteDecoratorA(Component* com) :Decorator(com)
{

}

ConcreteDecoratorA::~ConcreteDecoratorA()
{

}

void ConcreteDecoratorA::AddedBehavior()
{
    std::cout << "ConcreteDecorator::AddedBehacior... AAAAA" << std::endl;
}

void ConcreteDecoratorA::Operation()
{
    _com->Operation();
    this->AddedBehavior();
}

ConcreteDecoratorB::ConcreteDecoratorB(Component* com) :Decorator(com)
{

}

ConcreteDecoratorB::~ConcreteDecoratorB()
{

}

void ConcreteDecoratorB::AddedBehavior()
{
    std::cout << "ConcreteDecorator::AddedBehacior... BBBBB" << std::endl;
}

void ConcreteDecoratorB::Operation()
{
    _com->Operation();
    this->AddedBehavior();
}