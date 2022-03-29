//
// Created by zyc on 2022/3/30.
//

#ifndef CPPDEMO_OBSERVERABLE_H
#define CPPDEMO_OBSERVERABLE_H
#include <string>
#include "list"

using namespace std;
class Observer;
class Observerable {
public:
    Observerable();
    virtual ~Observerable();

    void Attach(Observer* pOb);
    void Detach(Observer* pOb);

    int GetObseverCount() const
    {
        return _Obs.size();
    }

    void DetachAll()
    {
        _Obs.clear();
    }

    virtual void GetSomeNews(string str)
    {
        SetChange(str);
    }

    void  SetChange(string news);
private:
    void Notify(void* pArg);

private:
    bool _bChange;
    list<Observer*> _Obs;
};


#endif //CPPDEMO_OBSERVERABLE_H
