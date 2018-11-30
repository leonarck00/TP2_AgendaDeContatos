#ifndef CONTATODAO_H
#define CONTATODAO_H
#include<QString>
#include<crud.h>
#include<fstream>
namespace agenda{
class ContatoDAO: public CRUD
{
private:
    QString nomeDoArquivoNoDisco;
public:
    ContatoDAO(QString nomeDoArquivoNoDisco);
    //Sobrescrevendo
    void incluir(Contato &objeto) const;
    std::list<Contato>* listagem() const;
};
}
#endif // CONTATODAO_H
