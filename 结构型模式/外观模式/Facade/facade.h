#ifndef _FACADE_H
#define _FACADE_H

class Subsystem1
{
public:
    Subsystem1();
    ~Subsystem1();

    void Operation();
};

class Subsystem2
{
public:
    Subsystem2();
    ~Subsystem2();

    void Operation();
};

class Subsystem3
{
public:
    Subsystem3();
    ~Subsystem3();

    void Operation();
};

class Facade
{
public:
    Facade();
    ~Facade();
    void OperationWrapper();

private:
    Subsystem1* _subs1;
    Subsystem2* _subs2;
    Subsystem3* _subs3;
};
#endif // !_FACADE_H
