#include "teladosistema.h"
#include "ui_teladosistema.h"

TelaDoSistema::TelaDoSistema(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TelaDoSistema),
    nomeDoArquivoDeContatos("AgendaDeContatos.txt")
{
    ui->setupUi(this);
}
TelaDoSistema::~TelaDoSistema()
{
    delete ui;
}
void TelaDoSistema::limparTela()const{
    ui->lineEditNome->clear();
    ui->lineEditLogradouro->clear();
    ui->lineEditNumero->clear();
    ui->lineEditID->clear();
    ui->tableWidgetGridTelefones->setRowCount(0);
}
void TelaDoSistema::on_pushButtonIncluir_clicked()
{
    try {
        agenda::GeradorID ids;
        QString logradouro = ui->lineEditLogradouro->text();
        int numero = ui->lineEditNumero->text().toInt();
        agenda::Endereco endereco(logradouro,numero);
        int id = ids.getID();
        QString nome = ui->lineEditNome->text();
        contatoGeral.setId(id);
        contatoGeral.setNome(nome);
        contatoGeral.setEnderecoResidencial(endereco);
        agenda::ContatoDAO agendaDeContatos(nomeDoArquivoDeContatos);
        agendaDeContatos.incluir(contatoGeral);
        this->limparTela();
        contatoGeral.limparContato();

    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA", erro);
    }


    //QMessageBox::information(this,"ENDERECO", testeE.desmaterializar());
    //agenda::Telefone testeT(,55,62,123456);
    //QMessageBox::information(this,"TELEFONE", testeT.desmaterializar());

    //agenda::Contato testeC(ids.getID(),"Bolsonaro Presidente",testeE);
    //QMessageBox::information(this,"CONTATO", testeC.desmaterializar());

   // agenda::ContatoDAO agendaTeste("Contatos.txt");
   // agendaTeste.incluir(testeC);

}

void TelaDoSistema::on_pushButtonAddTelefone_clicked()
{
    int ddi = ui->lineEditDDI->text().toInt();
    int ddd = ui->lineEditDDD->text().toInt();
    int numero = ui->lineEditNumeroTelefone->text().toInt();
    agenda::Telefone fone(0,ddi,ddd,numero);
    contatoGeral.setTelefone(fone);
    //Incluir dados na Grid dos Telefone
    QString ddiStr = ui->lineEditDDI->text();
    QString dddStr = ui->lineEditDDD->text();
    QString numeroStr = ui->lineEditNumeroTelefone->text();
    QTableWidgetItem *item1 = new QTableWidgetItem(ddiStr);
    QTableWidgetItem *item2 = new QTableWidgetItem(dddStr);
    QTableWidgetItem *item3 = new QTableWidgetItem(numeroStr);
    int linha = ui->tableWidgetGridTelefones->rowCount();
    ui->tableWidgetGridTelefones->insertRow(linha);
    ui->tableWidgetGridTelefones->setItem(linha,0,item1);
    ui->tableWidgetGridTelefones->setItem(linha,1,item2);
    ui->tableWidgetGridTelefones->setItem(linha,2,item3);
    ui->lineEditDDI->clear();
    ui->lineEditDDD->clear();
    ui->lineEditNumeroTelefone->clear();
}

void TelaDoSistema::on_pushButtonListagem_clicked()
{
    TelaListagem telaListagem;
    telaListagem.setModal(true);
    telaListagem.exec();
}
