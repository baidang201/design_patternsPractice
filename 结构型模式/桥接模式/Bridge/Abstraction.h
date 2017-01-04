#ifndef __ABSTRACTION__H__
#define __ABSTRACTION__H__

class AbstractionImp;

class Abstraction
{
public:
    virtual ~Abstraction();
    virtual void Operation() = 0;

protected:
    Abstraction();
};

class RefinedAbstraction:public Abstraction
{
public:
    RefinedAbstraction(AbstractionImp* imp);
    ~RefinedAbstraction();

    void Operation();

private:
    AbstractionImp* _imp;
};


#endif