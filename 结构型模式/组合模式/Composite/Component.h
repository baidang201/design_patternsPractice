#ifndef __COMPONENT__H__
#define __COMPONENT__H__

class Component
{
public:
    Component();
    virtual ~Component();

public:
    virtual void Operation() = 0;
    virtual void Add(Component* com);
    virtual void Remove(Component* com);
    virtual Component* GetChild(int index);
};

#endif