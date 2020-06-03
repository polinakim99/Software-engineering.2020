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
    QPixmap pix(":/pics/osnova.png");
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

void MainWindow::on_action_triggered()
{
    ui->picture->setHidden(1);
    ui->titleD->setHidden(0);
    ui->titleS->setHidden(0);
    ui->titleW->setHidden(0);
    ui->titleF->setHidden(0);
    ui->titleE->setHidden(0);
    QString strong = (list[1].strong()).join("<br>");
    QString enemy = (list[1].enemy()).join("<br>");
    QString week = (list[1].week()).join("<br>");
    QString food = (list[1].food()).join("<br>");

    ui->name->setText(list[1].name());
    ui->desc->setText(list[1].desc());
    ui->streng->setText(strong);
    ui->enem->setText(enemy);
    ui->week->setText(week);
    ui->food->setText(food);

    QPixmap pix(list[1].pic());
    int w = ui->pics->width();
    int h = ui->pics->height();
    ui->pics->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->pics->setAlignment(Qt::AlignCenter);

}

void MainWindow::on_action_2_triggered()
{
    ui->picture->setHidden(1);
    ui->titleD->setHidden(0);
    ui->titleS->setHidden(0);
    ui->titleW->setHidden(0);
    ui->titleF->setHidden(0);
    ui->titleE->setHidden(0);
    QString strong = (list[2].strong()).join("<br>");
    QString enemy = (list[2].enemy()).join("<br>");
    QString week = (list[2].week()).join("<br>");
    QString food = (list[2].food()).join("<br>");

    ui->name->setText(list[2].name());
    ui->desc->setText(list[2].desc());
    ui->streng->setText(strong);
    ui->enem->setText(enemy);
    ui->week->setText(week);
    ui->food->setText(food);

    QPixmap pix(list[2].pic());
    int w = ui->pics->width();
    int h = ui->pics->height();
    ui->pics->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->pics->setAlignment(Qt::AlignCenter);
}

void MainWindow::on_action_4_triggered()
{
    ui->picture->setHidden(1);
    ui->titleD->setHidden(0);
    ui->titleS->setHidden(0);
    ui->titleW->setHidden(0);
    ui->titleF->setHidden(0);
    ui->titleE->setHidden(0);
    QString strong = (list[3].strong()).join("<br>");
    QString enemy = (list[3].enemy()).join("<br>");
    QString week = (list[3].week()).join("<br>");
    QString food = (list[3].food()).join("<br>");

    ui->name->setText(list[3].name());
    ui->desc->setText(list[3].desc());
    ui->streng->setText(strong);
    ui->enem->setText(enemy);
    ui->week->setText(week);
    ui->food->setText(food);

    QPixmap pix(list[3].pic());
    int w = ui->pics->width();
    int h = ui->pics->height();
    ui->pics->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->pics->setAlignment(Qt::AlignCenter);
}

void MainWindow::on_action_5_triggered()
{
    ui->picture->setHidden(1);
    ui->titleD->setHidden(0);
    ui->titleS->setHidden(0);
    ui->titleW->setHidden(0);
    ui->titleF->setHidden(0);
    ui->titleE->setHidden(0);
    QString strong = (list[4].strong()).join("<br>");
    QString enemy = (list[4].enemy()).join("<br>");
    QString week = (list[4].week()).join("<br>");
    QString food = (list[4].food()).join("<br>");


    ui->name->setText(list[4].name());
    ui->desc->setText(list[4].desc());
    ui->streng->setText(strong);
    ui->enem->setText(enemy);
    ui->week->setText(week);
    ui->food->setText(food);

    QPixmap pix(list[4].pic());
    int w = ui->pics->width();
    int h = ui->pics->height();
    ui->pics->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->pics->setAlignment(Qt::AlignCenter);
}

void MainWindow::on_action_7_triggered()
{
    ui->picture->setHidden(1);
    ui->titleD->setHidden(0);
    ui->titleS->setHidden(0);
    ui->titleW->setHidden(0);
    ui->titleF->setHidden(0);
    ui->titleE->setHidden(0);
    QString strong = (list[5].strong()).join("<br>");
    QString enemy = (list[5].enemy()).join("<br>");
    QString week = (list[5].week()).join("<br>");
    QString food = (list[5].food()).join("<br>");

    ui->name->setText(list[5].name());
    ui->desc->setText(list[5].desc());
    ui->streng->setText(strong);
    ui->enem->setText(enemy);
    ui->week->setText(week);
    ui->food->setText(food);

    QPixmap pix(list[5].pic());
    int w = ui->pics->width();
    int h = ui->pics->height();
    ui->pics->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->pics->setAlignment(Qt::AlignCenter);
}

void MainWindow::on_action_8_triggered()
{
    ui->picture->setHidden(1);
    ui->titleD->setHidden(0);
    ui->titleS->setHidden(0);
    ui->titleW->setHidden(0);
    ui->titleF->setHidden(0);
    ui->titleE->setHidden(0);
    QString strong = (list[6].strong()).join("<br>");
    QString enemy = (list[6].enemy()).join("<br>");
    QString week = (list[6].week()).join("<br>");
    QString food = (list[6].food()).join("<br>");

    ui->name->setText(list[6].name());
    ui->desc->setText(list[6].desc());
    ui->streng->setText(strong);
    ui->enem->setText(enemy);
    ui->week->setText(week);
    ui->food->setText(food);

    QPixmap pix(list[6].pic());
    int w = ui->pics->width();
    int h = ui->pics->height();
    ui->pics->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->pics->setAlignment(Qt::AlignCenter);
}

void MainWindow::on_action_9_triggered()
{
    ui->picture->setHidden(1);
    ui->titleD->setHidden(0);
    ui->titleS->setHidden(0);
    ui->titleW->setHidden(0);
    ui->titleF->setHidden(0);
    ui->titleE->setHidden(0);
    QString strong = (list[7].strong()).join("<br>");
    QString enemy = (list[7].enemy()).join("<br>");
    QString week = (list[7].week()).join("<br>");
    QString food = (list[7].food()).join("<br>");

    ui->name->setText(list[7].name());
    ui->desc->setText(list[7].desc());
    ui->streng->setText(strong);
    ui->enem->setText(enemy);
    ui->week->setText(week);
    ui->food->setText(food);

    QPixmap pix(list[7].pic());
    int w = ui->pics->width();
    int h = ui->pics->height();
    ui->pics->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
    ui->pics->setAlignment(Qt::AlignCenter);
}
