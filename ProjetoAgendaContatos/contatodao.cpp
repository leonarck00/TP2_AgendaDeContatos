#include "contatodao.h"
namespace agenda{
ContatoDAO::ContatoDAO(QString nomeDoArquivoNoDisco):
    nomeDoArquivoNoDisco(nomeDoArquivoNoDisco)
{
}
//Sobrescrevendo
void ContatoDAO::incluir(Contato &objeto) const{
    std::ofstream arquivoAgenda;
    arquivoAgenda.open(nomeDoArquivoNoDisco.toStdString().c_str(),
                                   std::ios::out|std::ios::app);
    if(!arquivoAgenda.is_open()){
        throw QString("Arquivo de Agenda nao foi aberto - Metodo incluir");
    }
    arquivoAgenda<<objeto.desmaterializar().toStdString()+"\n";
    arquivoAgenda.close();
    // incluindo dados dos telefone
    std::ofstream arquivoTelefones;
    arquivoTelefones.open( "./TelefonesDosContatos.txt",
                        std::ios::out|std::ios::app);
    if(!arquivoTelefones.is_open()){
        throw QString("Arquivo de Telefones nao foi aberto - Metodo incluir");
    }
    std::vector<Telefone> fones;
    fones = objeto.getTelefone();
    for(int pos =0; pos < fones.size() ; pos++ ){
        agenda::Telefone aux = fones.at(pos);
        aux.setID(objeto.getId());
        arquivoTelefones<<aux.desmaterializar().toStdString() + "\n";
    }
    arquivoTelefones.close();

}
std::list<Contato>* ContatoDAO::listagem()const{
    std::list<agenda::Contato> *lista = 0;
    lista = new std::list<agenda::Contato>();
    std::ifstream arquivoAgenda;
    arquivoAgenda.open(nomeDoArquivoNoDisco.toStdString().c_str());
    if(!arquivoAgenda.is_open()){
        throw QString("Arquivo de Agenda nao foi aberto");
    }
    std::string linha;
    std::getline(arquivoAgenda,linha);
    while(!arquivoAgenda.eof()){
        agenda::Contato objeto;
        objeto.materializar(QString::fromStdString(linha));
        lista->push_back(objeto);
        std::getline(arquivoAgenda,linha);
    }
    arquivoAgenda.close();
    return lista;
}


}
