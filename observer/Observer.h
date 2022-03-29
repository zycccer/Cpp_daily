//
// Created by zyc on 2022/3/30.
//

#ifndef CPPDEMO_OBSERVER_H
#define CPPDEMO_OBSERVER_H


class Observer {
public:
    Observer() { ; }
    virtual ~Observer() { ; }
    virtual void Update(void* pArg) = 0;
};


#endif //CPPDEMO_OBSERVER_H
