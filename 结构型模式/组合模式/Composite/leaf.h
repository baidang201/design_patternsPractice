#ifndef __LEAF__H__
#define __LEAF__H__
#include "Component.h"

class Leaf :public Component
{
public:
    Leaf();
    ~Leaf();

    void Operation();
};


#endif