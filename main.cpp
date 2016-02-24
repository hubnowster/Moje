#include <iostream>
#include <vector>

using namespace std;


class Zwierze {
protected:
    int masa;
public:
    virtual void daj_glos() = 0;
    void ustaw_mase(int masa) {

        this->masa=masa
        ;}
    Zwierze(){ustaw_mase(0);}
    void test (){cout<<"test"<<endl;}
};

class Krowa:public Zwierze{
public:
    void daj_glos(){cout<<"Muu!"<<endl;}
    void ustaw_mase(int masa){
        if (masa<0 || masa>1000) throw -1;
        Zwierze::ustaw_mase(masa);
    };
    Krowa(){};

};

class Forfiter:public Zwierze{
public:
    void daj_glos(){cout<<"Szwagier!\n";}
    void ustaw_mase(int masa){
        if (masa<0 || masa>1000) throw -1;
        Zwierze::ustaw_mase(masa);
    };
    Forfiter(){};

};

class Zoo{
protected:
    vector<Zwierze*>v;
};

int main()
{
    vector<Zwierze*>v;
    v.push_back(new Krowa());
    v.push_back(new Forfiter());
    for(int i=0;i<v.size();++i)
    {
        v.at(i)->daj_glos();
    }
    /*Zwierze* z;
    z=new Krowa();
    z->daj_glos();
    delete z;
    z=new Forfiter();
    z->daj_glos();
    delete z;*/
    return 0;
}
