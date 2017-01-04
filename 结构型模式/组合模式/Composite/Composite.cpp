#include "Component.h"
#include "Composite.h"

Composite::Composite()
{

}

Composite::~Composite()
{

}

void Composite::Operation()
{
    vector<Component*>::iterator comIter = comVec.begin();
    for (; comIter != comVec.end(); comIter++)
    {
        (*comIter)->Operation();
    }
}

void Composite::Add(Component* com)
{
    comVec.push_back(com);
}

void Composite::Remove(Component* com)
{
    auto result1 = std::find(std::begin(comVec), std::end(comVec), com);
    if (result1 != std::end(comVec)) 
    {
        comVec.erase(result1);
    }
  
}

Component* Composite::GetChild(int index)
{
    return comVec[index];
}