#include "telalistagem.h"
#include "ui_telalistagem.h"

TelaListagem::TelaListagem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaListagem),
    nomeDoArquivoDeContatos("AgendaDeContatos.txt")
{
    ui->setupUi(this);
}

TelaListagem::~TelaListagem()
{
    delete ui;
}

void TelaListagem::on_pushButtonVoltar_clicked()
{
    this->close();
}

void TelaListagem::on_pushButtonListarContatos_clicked()
{
    agenda::ContatoDAO agendaDeContatos(nomeDoArquivoDeContatos);
    std::list<agenda::Contato>* lista = agendaDeContatos.listagem();
    std::list<agenda::Contato>::iterator iterLista;
    for(iterLista = lista->begin();iterLista!=lista->end();iterLista++){
        agenda::Contato objeto = *iterLista;
        //teste
        ui->tableWidgetListagem->setAlternatingRowColors(true);
        //ui->tableWidgetListagem->resizeColumnsToContents();
        QString id = QString::number(objeto.getId());
        QString nome = objeto.getNome();
        QString logradouro = objeto.getEnderecoResidencial().getLogradouro();
        QString numero = QString::number(objeto.getEnderecoResidencial().getNumero());
        //QString telefone = "123";
        QTableWidgetItem *item1 = new QTableWidgetItem(id);
        QTableWidgetItem *item2 = new QTableWidgetItem(nome);
        QTableWidgetItem *item3 = new QTableWidgetItem(logradouro);
        QTableWidgetItem *item4 = new QTableWidgetItem(numero);
        int linha = ui->tableWidgetListagem->rowCount();
        ui->tableWidgetListagem->insertRow(linha);
        //ui->tableWidgetListagem->
        ui->tableWidgetListagem->setItem(linha,0,item1);
        ui->tableWidgetListagem->setItem(linha,1,item2);
        ui->tableWidgetListagem->setItem(linha,2,item3);
        ui->tableWidgetListagem->setItem(linha,3,item4);
        //ui->tableWidgetListagem->setItem(linha,4,item5);
        //Mostrando os telefones
        std::vector<agenda::Telefone> telefones;
        telefones = objeto.getTelefone();
        QString telefone2 = telefones.at(0).getTelefone();
        QTableWidgetItem *item5 = new QTableWidgetItem(telefone2);
        ui->tableWidgetListagem->setItem(linha,4,item5);
        for(int pos = 1; pos < telefones.size(); pos++){
            linha = ui->tableWidgetListagem->rowCount();
            ui->tableWidgetListagem->insertRow(linha);
            telefone2 = telefones.at(pos).getTelefone();
            QTableWidgetItem *item6 = new QTableWidgetItem(telefone2);
            ui->tableWidgetListagem->setItem(linha,4,item6);
        }

    }

    delete lista;
}
