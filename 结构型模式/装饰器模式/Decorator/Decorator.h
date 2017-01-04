#ifndef DECORATOR__H__
#define DECORATOR__H__

class Component
{
public:
    virtual ~Component();
    virtual void Operation();

protected:
    Component();
};

class ConcreteComponent :public Component
{
public:
    ConcreteComponent();
    ~ConcreteComponent();

    void Operation();
};

class Decorator :public Component
{
public:
    Decorator(Component* com);
    virtual ~Decorator();
    void Operation();

protected:
    Component* _com;
};

class ConcreteDecoratorA : public Decorator
{
public:
    ConcreteDecoratorA(Component* com);
    ~ConcreteDecoratorA();

    void Operation();
    void AddedBehavior();
};

class ConcreteDecoratorB : public Decorator
{
public:
    ConcreteDecoratorB(Component* com);
    ~ConcreteDecoratorB();

    void Operation();
    void AddedBehavior();
};

#endif