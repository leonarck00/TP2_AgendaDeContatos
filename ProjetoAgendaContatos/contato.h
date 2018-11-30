#ifndef CONTATO_H
#define CONTATO_H
#include<QString>
#include<QStringList>
#include<endereco.h>
#include<vector>
#include<telefone.h>
#include<mapeardados.h>

namespace agenda{
class Contato : public MapearDados
{
private:
    int id;
    QString nome;
    Endereco enderecoResidencial;
//    std::vector<QString> email;
    std::vector<Telefone> telefones;
public:
    Contato();
    Contato(int id, QString nome, Endereco enderecoResidencial);
    ~Contato(){}//tem que implementar
    void setId(int id){this->id = id;}
    void setNome(QString nome){this->nome = nome;}
    void setEnderecoResidencial(Endereco objeto){this->enderecoResidencial = objeto;}
    int getId()const{return id;}
    QString getNome()const{return nome;}
    Endereco getEnderecoResidencial()const{return enderecoResidencial;}
    void setEnail(QString email){email.push_back(email);}
    void setTelefone(Telefone objeto){telefones.push_back(objeto);}
    void limparContato();
    //std::vector<QString>* getEmail()const;
    std::vector<Telefone> getTelefone()const{return telefones;}

    //Sobrescrevendo
    QString desmaterializar()const;
    void materializar(QString str);
};
}
#endif // CONTATO_H
