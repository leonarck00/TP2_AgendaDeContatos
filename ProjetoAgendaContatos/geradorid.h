#ifndef GERADORID_H
#define GERADORID_H
#include<fstream>
namespace agenda{
class GeradorID
{
private:
    int id;
public:
    GeradorID();
    ~GeradorID();
    int getID(){id++; return id;}
};
}
#endif // GERADORID_H
