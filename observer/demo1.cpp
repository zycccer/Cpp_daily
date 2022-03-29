//
// Created by zyc on 2022/3/30.
//
#include "Observer.h"
#include "Observerable.h"
#include "iostream"
#include "string"
using namespace std;
class News : public Observerable
{
public:
    virtual void GetSomeNews(string str)
    {
        SetChange("News: " + str);
    }
};
class User1 : public Observer{
public:
    virtual void Update(void* pArg){
        cout<<"User1 News" << reinterpret_cast<char*>(pArg) <<endl;
    }
};
class User2 : public Observer{
public:
    virtual void Update(void* pArg){
        cout<<"User1 News" << reinterpret_cast<char*>(pArg) <<endl;
    }
};
int main(){


    User1 u1;
    User2 u2;
    News n1;
//
//    n1.GetSomeNews("T0");
//    cout << n1.GetObseverCount() << endl;
//
//    n1.Attach(&u1);
//    n1.Attach(&u2);
//    n1.GetSomeNews("T2");
//    cout << n1.GetObseverCount() << endl;

}