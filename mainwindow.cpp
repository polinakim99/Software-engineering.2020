#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "classes.h"
#include "listof.h"
#include "reader.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(QIcon(":/pics/1.png"));
    ui->pushButton->setIconSize(QSize(20,20));

    this->setWindowFlags(Qt::FramelessWindowHint);

    QPixmap pix(":/pics/osnova.png");
    ui->pushButton->setHidden(1);
    ui->picture->setPixmap(pix);
    ui->titleD->setHidden(1);
    ui->titleS->setHidden(1);
    ui->titleW->setHidden(1);
    ui->titleF->setHidden(1);
    ui->titleE->setHidden(1);
  try {
        QString linker = ":/son/kurs.json";
        reader read(linker);
        listof newList(read.getMap());
        list = newList.getList();
    } catch (const char* err) {
        QMessageBox::critical(this,"Error",err);
        exit(0);

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::creature(int page)
{
    ui->pushButton->setHidden(0);
    ui->picture->setHidden(1);
    ui->titleD->setHidden(0);
    ui->titleS->setHidden(0);
    ui->titleW->setHidden(0);
    ui->titleF->setHidden(0);
    ui->titleE->setHidden(0);
    QString strong = (list[page].strong()).join("<br>");
    QString enemy = hyperlinklist(list[page].enemy(),"<br>");
    QString week = (list[page].week()).join("<br>");
    QString food = (list[page].food()).join("<br>");

    ui->name->setText(list[page].name());
    ui->desc->setText(list[page].desc());
    ui->streng->setText(strong);
    ui->enem->setText(enemy);
    ui->week->setText(week);
    ui->food->setText(food);
    QPixmap pix(list[page].pic());
    int w = ui->pics->width();
    int h = ui->pics->height();
    ui->pics->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->pics->setAlignment(Qt::AlignCenter);
}

void MainWindow::on_action_triggered()
{
    creature(1);
}

void MainWindow::on_action_2_triggered()
{
    creature(2);
}

void MainWindow::on_action_4_triggered()
{
    creature(3);
}

void MainWindow::on_action_5_triggered()
{
    creature(4);
}

void MainWindow::on_action_7_triggered()
{
    creature(5);
}

void MainWindow::on_action_8_triggered()
{
    creature(6);
}

void MainWindow::on_action_9_triggered()
{
    creature(7);
}

QString MainWindow::hyperlink(int page, QString str)
{
    QString link = "";
        link += "<a href=\"" + QString::number(page) + "\" style=\"color: #9C0000;\">" + str + "</a>";
        return link;
}

QString MainWindow::hyperlinklist(QStringList inList, QString probel)
{
    QString newList = "";
    for (int i = 0; i < inList.size(); i++)
    {
        for (size_t j = 0; j < list.size(); j++)
        {
            if (list[j].name() == inList.at(i))
            {
                newList += hyperlink(j, inList.at(i));
                if (i != inList.size()-1)
                {
                    newList += probel;
                }
                break;
            }
        }
    }
    return newList;
}

void MainWindow::on_enem_linkActivated(const QString &link)
{
    creature(link.toInt());
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::StandardButton bYes;
    bYes = QMessageBox::question(this,"Close", "Do you want to close program?", QMessageBox::Yes|QMessageBox::No);

    if (bYes == QMessageBox::Yes){
    exit(0);
    }
}
