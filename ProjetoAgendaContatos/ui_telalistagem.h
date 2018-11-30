/********************************************************************************
** Form generated from reading UI file 'telalistagem.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALISTAGEM_H
#define UI_TELALISTAGEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaListagem
{
public:
    QPushButton *pushButtonVoltar;
    QTableWidget *tableWidgetListagem;
    QPushButton *pushButtonListarContatos;

    void setupUi(QDialog *TelaListagem)
    {
        if (TelaListagem->objectName().isEmpty())
            TelaListagem->setObjectName(QStringLiteral("TelaListagem"));
        TelaListagem->resize(690, 362);
        pushButtonVoltar = new QPushButton(TelaListagem);
        pushButtonVoltar->setObjectName(QStringLiteral("pushButtonVoltar"));
        pushButtonVoltar->setGeometry(QRect(560, 20, 113, 32));
        tableWidgetListagem = new QTableWidget(TelaListagem);
        if (tableWidgetListagem->columnCount() < 5)
            tableWidgetListagem->setColumnCount(5);
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidgetListagem->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableWidgetListagem->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableWidgetListagem->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableWidgetListagem->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tableWidgetListagem->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidgetListagem->setObjectName(QStringLiteral("tableWidgetListagem"));
        tableWidgetListagem->setGeometry(QRect(20, 60, 651, 271));
        tableWidgetListagem->setLineWidth(1);
        pushButtonListarContatos = new QPushButton(TelaListagem);
        pushButtonListarContatos->setObjectName(QStringLiteral("pushButtonListarContatos"));
        pushButtonListarContatos->setGeometry(QRect(20, 20, 131, 32));

        retranslateUi(TelaListagem);

        QMetaObject::connectSlotsByName(TelaListagem);
    } // setupUi

    void retranslateUi(QDialog *TelaListagem)
    {
        TelaListagem->setWindowTitle(QApplication::translate("TelaListagem", "LISTAGEM DOS CONTATOS", nullptr));
        pushButtonVoltar->setText(QApplication::translate("TelaListagem", "Voltar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetListagem->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TelaListagem", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetListagem->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TelaListagem", "NOME", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetListagem->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TelaListagem", "LOGRADOURO", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetListagem->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("TelaListagem", "NUMERO", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetListagem->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("TelaListagem", "TELEFONES", nullptr));
        pushButtonListarContatos->setText(QApplication::translate("TelaListagem", "Listar Contatos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaListagem: public Ui_TelaListagem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALISTAGEM_H
