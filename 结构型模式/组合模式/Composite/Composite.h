#include "Component.h"
#include <vector>
using namespace std;

class Composite :public Component
{
public:
    Composite();
    ~Composite();

public:
    void Operation();
    void Add(Component* com);
    void Remove(Component* com);

    Component* GetChild(int index);

private:
    vector<Component*> comVec;

};