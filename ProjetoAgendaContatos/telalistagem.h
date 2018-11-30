#ifndef TELALISTAGEM_H
#define TELALISTAGEM_H

#include <QDialog>
#include<contatodao.h>
#include<QMessageBox>
#include<QString>
namespace Ui {
class TelaListagem;
}

class TelaListagem : public QDialog
{
    Q_OBJECT

public:
    explicit TelaListagem(QWidget *parent = 0);
    ~TelaListagem();

private slots:
    void on_pushButtonVoltar_clicked();

    void on_pushButtonListarContatos_clicked();

private:
    Ui::TelaListagem *ui;
    const QString nomeDoArquivoDeContatos;
};

#endif // TELALISTAGEM_H
