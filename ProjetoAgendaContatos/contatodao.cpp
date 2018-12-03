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
    //Criando uma Lista com os dados dos contatos
    //Dados armazenados no arquivo de Contatos
    std::list<agenda::Contato> *listaContatos = 0;
    listaContatos = new std::list<agenda::Contato>();
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
        listaContatos->push_back(objeto);
        std::getline(arquivoAgenda,linha);
    }
    arquivoAgenda.close();
    // Finalizando o processo de criar a lista de contatos

    //Criando uma lista com todos os telefones armazenados
    //No arquivo de telefones
    std::list<agenda::Telefone> *listaTelefones = 0;
    listaTelefones = new std::list<agenda::Telefone>();
    std::ifstream arquivoTelefones;
    arquivoTelefones.open("./TelefonesDosContatos.txt");
    if(!arquivoTelefones.is_open()){
        throw QString("Arquivo de Agenda nao foi aberto");
    }
    std::string linhaTelefone;
    std::getline(arquivoTelefones,linhaTelefone);
    while(!arquivoTelefones.eof()){
        agenda::Telefone fone;
        fone.materializar(QString::fromStdString(linhaTelefone));
        listaTelefones->push_back(fone);
        std::getline(arquivoTelefones,linhaTelefone);
    }
    arquivoTelefones.close();

    std::list<agenda::Contato> *listaContatosFinal = 0;
    listaContatosFinal = new std::list<agenda::Contato>();

    std::list<agenda::Contato>::iterator iListaContatos;
    for(iListaContatos = listaContatos->begin();iListaContatos!=listaContatos->end();iListaContatos++){
        agenda::Contato objContato = *iListaContatos;
        std::list<agenda::Telefone>::iterator iListaTelefones;
        int idContato = (*iListaContatos).getId();
        for(iListaTelefones = listaTelefones->begin();iListaTelefones!=listaTelefones->end();iListaTelefones++){
            if(idContato == (*iListaTelefones).getID() ){
                objContato.setTelefone((*iListaTelefones));
            }
        }
        listaContatosFinal->push_back(objContato);
    }
    return listaContatosFinal;
}


}
