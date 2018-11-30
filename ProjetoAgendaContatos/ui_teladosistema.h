/********************************************************************************
** Form generated from reading UI file 'teladosistema.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELADOSISTEMA_H
#define UI_TELADOSISTEMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaDoSistema
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonIncluir;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditNome;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditLogradouro;
    QPushButton *pushButtonAddTelefone;
    QTableWidget *tableWidgetGridTelefones;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEditNumero;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEditID;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLineEdit *lineEditDDI;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLineEdit *lineEditDDD;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLineEdit *lineEditNumeroTelefone;
    QPushButton *pushButtonListagem;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TelaDoSistema)
    {
        if (TelaDoSistema->objectName().isEmpty())
            TelaDoSistema->setObjectName(QStringLiteral("TelaDoSistema"));
        TelaDoSistema->resize(619, 533);
        centralWidget = new QWidget(TelaDoSistema);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonIncluir = new QPushButton(centralWidget);
        pushButtonIncluir->setObjectName(QStringLiteral("pushButtonIncluir"));
        pushButtonIncluir->setGeometry(QRect(20, 370, 113, 32));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 581, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        lineEditNome = new QLineEdit(layoutWidget);
        lineEditNome->setObjectName(QStringLiteral("lineEditNome"));

        horizontalLayout->addWidget(lineEditNome);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 90, 491, 23));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        lineEditLogradouro = new QLineEdit(layoutWidget1);
        lineEditLogradouro->setObjectName(QStringLiteral("lineEditLogradouro"));

        horizontalLayout_2->addWidget(lineEditLogradouro);

        pushButtonAddTelefone = new QPushButton(centralWidget);
        pushButtonAddTelefone->setObjectName(QStringLiteral("pushButtonAddTelefone"));
        pushButtonAddTelefone->setGeometry(QRect(540, 130, 71, 51));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        font1.setWeight(75);
        pushButtonAddTelefone->setFont(font1);
        tableWidgetGridTelefones = new QTableWidget(centralWidget);
        if (tableWidgetGridTelefones->columnCount() < 3)
            tableWidgetGridTelefones->setColumnCount(3);
        QFont font2;
        font2.setPointSize(13);
        font2.setBold(true);
        font2.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem->setFont(font2);
        tableWidgetGridTelefones->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem1->setFont(font2);
        tableWidgetGridTelefones->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem2->setFont(font2);
        tableWidgetGridTelefones->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidgetGridTelefones->setObjectName(QStringLiteral("tableWidgetGridTelefones"));
        tableWidgetGridTelefones->setGeometry(QRect(150, 190, 301, 101));
        tableWidgetGridTelefones->setFont(font);
        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(530, 90, 81, 23));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_4->addWidget(label_3);

        lineEditNumero = new QLineEdit(layoutWidget2);
        lineEditNumero->setObjectName(QStringLiteral("lineEditNumero"));

        horizontalLayout_4->addWidget(lineEditNumero);

        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 20, 150, 23));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(17);
        font3.setBold(true);
        font3.setWeight(75);
        label_4->setFont(font3);

        horizontalLayout_3->addWidget(label_4);

        lineEditID = new QLineEdit(layoutWidget3);
        lineEditID->setObjectName(QStringLiteral("lineEditID"));
        lineEditID->setReadOnly(true);

        horizontalLayout_3->addWidget(lineEditID);

        layoutWidget4 = new QWidget(centralWidget);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(30, 130, 506, 49));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(15);
        font4.setBold(true);
        font4.setWeight(75);
        label_5->setFont(font4);

        horizontalLayout_5->addWidget(label_5);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);
        label_6->setLayoutDirection(Qt::RightToLeft);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        lineEditDDI = new QLineEdit(layoutWidget4);
        lineEditDDI->setObjectName(QStringLiteral("lineEditDDI"));
        lineEditDDI->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lineEditDDI);


        horizontalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setLayoutDirection(Qt::RightToLeft);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_7);

        lineEditDDD = new QLineEdit(layoutWidget4);
        lineEditDDD->setObjectName(QStringLiteral("lineEditDDD"));
        lineEditDDD->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(lineEditDDD);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font);
        label_8->setLayoutDirection(Qt::RightToLeft);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_8);

        lineEditNumeroTelefone = new QLineEdit(layoutWidget4);
        lineEditNumeroTelefone->setObjectName(QStringLiteral("lineEditNumeroTelefone"));
        lineEditNumeroTelefone->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(lineEditNumeroTelefone);


        horizontalLayout_5->addLayout(verticalLayout_3);

        pushButtonListagem = new QPushButton(centralWidget);
        pushButtonListagem->setObjectName(QStringLiteral("pushButtonListagem"));
        pushButtonListagem->setGeometry(QRect(480, 370, 113, 32));
        TelaDoSistema->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TelaDoSistema);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 619, 22));
        TelaDoSistema->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TelaDoSistema);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TelaDoSistema->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TelaDoSistema);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TelaDoSistema->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEditNome, lineEditLogradouro);
        QWidget::setTabOrder(lineEditLogradouro, lineEditNumero);
        QWidget::setTabOrder(lineEditNumero, lineEditDDI);
        QWidget::setTabOrder(lineEditDDI, lineEditDDD);
        QWidget::setTabOrder(lineEditDDD, lineEditNumeroTelefone);
        QWidget::setTabOrder(lineEditNumeroTelefone, pushButtonAddTelefone);
        QWidget::setTabOrder(pushButtonAddTelefone, pushButtonIncluir);
        QWidget::setTabOrder(pushButtonIncluir, tableWidgetGridTelefones);
        QWidget::setTabOrder(tableWidgetGridTelefones, lineEditID);

        retranslateUi(TelaDoSistema);

        QMetaObject::connectSlotsByName(TelaDoSistema);
    } // setupUi

    void retranslateUi(QMainWindow *TelaDoSistema)
    {
        TelaDoSistema->setWindowTitle(QApplication::translate("TelaDoSistema", "TelaDoSistema", nullptr));
        pushButtonIncluir->setText(QApplication::translate("TelaDoSistema", "INCLUIR", nullptr));
        label->setText(QApplication::translate("TelaDoSistema", "NOME", nullptr));
        label_2->setText(QApplication::translate("TelaDoSistema", "LOGRADOURO", nullptr));
        pushButtonAddTelefone->setText(QApplication::translate("TelaDoSistema", "+", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetGridTelefones->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TelaDoSistema", "DDI", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetGridTelefones->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TelaDoSistema", "DDD", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetGridTelefones->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TelaDoSistema", "NUMERO", nullptr));
        label_3->setText(QApplication::translate("TelaDoSistema", "N.", nullptr));
        label_4->setText(QApplication::translate("TelaDoSistema", "ID", nullptr));
        label_5->setText(QApplication::translate("TelaDoSistema", "TELEFONES:", nullptr));
        label_6->setText(QApplication::translate("TelaDoSistema", "DDI", nullptr));
        lineEditDDI->setText(QString());
        label_7->setText(QApplication::translate("TelaDoSistema", "DDD", nullptr));
        lineEditDDD->setText(QString());
        label_8->setText(QApplication::translate("TelaDoSistema", "NUMERO", nullptr));
        lineEditNumeroTelefone->setText(QString());
        pushButtonListagem->setText(QApplication::translate("TelaDoSistema", "LISTAGEM", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaDoSistema: public Ui_TelaDoSistema {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELADOSISTEMA_H
