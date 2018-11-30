#ifndef TELADOSISTEMA_H
#define TELADOSISTEMA_H

#include <QMainWindow>
#include <telalistagem.h>
#include <endereco.h>
#include<QMessageBox>
#include <contato.h>
#include <contatodao.h>
#include <geradorid.h>

namespace Ui {
class TelaDoSistema;
}

class TelaDoSistema : public QMainWindow
{
    Q_OBJECT

public:
    explicit TelaDoSistema(QWidget *parent = 0);
    ~TelaDoSistema();
private:
    void limparTela()const;

private slots:
    void on_pushButtonIncluir_clicked();

    void on_pushButtonAddTelefone_clicked();

    void on_pushButtonListagem_clicked();

private:
    Ui::TelaDoSistema *ui;
    const QString nomeDoArquivoDeContatos;
    agenda::Contato contatoGeral;
};

#endif // TELADOSISTEMA_H
