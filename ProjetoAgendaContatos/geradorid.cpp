#include "geradorid.h"
namespace agenda{
GeradorID::GeradorID():
    id(0)
{
    std::fstream arquivoID;
    arquivoID.open("./ArquivoDeID.txt",std::ios::in);
    if(!arquivoID.is_open()){
        std::ofstream arquivo;
        arquivo.open("./ArquivoDeID.txt");
        arquivo<<0;
        arquivo.close();
        arquivoID.open("./ArquivoDeID.txt",std::ios::in);
    }
    arquivoID>>id;
    arquivoID.close();
}

GeradorID::~GeradorID(){
    std::fstream arquivoID;
    arquivoID.open("./ArquivoDeID.txt",std::ios::out);
    arquivoID<<id;
    arquivoID.close();
}



}
