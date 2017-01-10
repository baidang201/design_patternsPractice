#ifndef _CONTEXT_H
#define _CONTEXT_H

class Strategy;

class Context
{
public:
    Context();
    ~Context();

    void SetStrategy(Strategy* stg);
    void DoAction();
    
private:
    Strategy* _stg;
};

#endif // !_CONTEXT_H
