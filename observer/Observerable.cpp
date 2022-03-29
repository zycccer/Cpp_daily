//
// Created by zyc on 2022/3/30.
//

#include "Observerable.h"
Observerable::Observerable()
{
    _bChange = false;
}


Observerable::~Observerable()
{

}


// ◊¢≤·π€≤Ï’ﬂ
void Observerable::Attach(Observer* pOb)
{
    if (pOb == NULL)
    {
        return;
    }

    // ø¥ø¥µ±«∞¡–±Ì÷– «∑Ò”–’‚∏ˆπ€≤Ï’ﬂ
    auto it = _Obs.begin();
    for (; it != _Obs.end(); it++)
    {
        if (*it == pOb)
        {
            return;
        }
    }

    _Obs.push_back(pOb);
}

// ∑¥◊¢≤·π€≤Ï’ﬂ
void Observerable::Detach(Observer* pOb)
{
    if ((pOb == NULL) || (_Obs.empty() == true))
    {
        return;
    }

    _Obs.remove(pOb);
}

void Observerable::SetChange(string news)
{
    _bChange = true;

    Notify( ( (void*)news.c_str() ));
}


void Observerable::Notify(void* pArg)
{
    if (_bChange == false)
    {
        return;
    }

    // ø¥ø¥µ±«∞¡–±Ì÷– «∑Ò”–’‚∏ˆπ€≤Ï’ﬂ
    auto it = _Obs.begin();
    for (; it != _Obs.end(); it++)
    {
        (*it)->Update(pArg);
    }

    _bChange = false;
}
