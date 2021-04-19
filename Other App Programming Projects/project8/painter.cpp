#include "painter.h"
#include "ui_painter.h"
#include <QPalette>

Painter::Painter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Painter),
    canvas(new Canvas)
{
    ui->setupUi(this);
    ui->ourCanvas->addWidget(canvas);


    QPixmap brushSize("PBS");
    QIcon W1(brushSize.scaled(ui->width1->size(), Qt::KeepAspectRatioByExpanding));
    ui->width1->setIcon(W1);

    QIcon W2(brushSize.scaled(ui->width2->size(),Qt::KeepAspectRatioByExpanding));
    ui->width2->setIcon(W2);
    ui->width2->setIconSize(ui->width2->size() * .8);

    QIcon W3(brushSize.scaled(ui->width3->size(), Qt::KeepAspectRatioByExpanding));
    ui->width3->setIcon(W3);
    ui->width3->setIconSize(ui->width3->size() * .85);

    QIcon W4(brushSize.scaled(ui->width4->size(), Qt::KeepAspectRatioByExpanding));
    ui->width4->setIcon(W4);
    ui->width4->setIconSize(ui->width4->size() * .9);

    QPixmap stamp("STMP");
    QIcon stmp(stamp);
    ui->face1->setIcon(stmp);
    ui->face2->setIcon(stmp);
    ui->hello1->setIcon(stmp);

    QPixmap blackBrush("PBCBL");
    QIcon C1(blackBrush);
    ui->purple->setIcon(C1);
    ui->purple->setIconSize(ui->purple->size() * .8);

    QPixmap blueBrush("PBCB");
    QIcon C2(blueBrush);
    ui->blue->setIcon(C2);
    ui->blue->setIconSize(ui->blue->size() * .8);

    QPixmap redBrush("PBCR");
    QIcon C3(redBrush);
    ui->red->setIcon(C3);
    ui->red->setIconSize(ui->red->size() * .8);

    QPixmap greenBrush("PBCG");
    QIcon C4(greenBrush);
    ui->green->setIcon(C4);
    ui->green->setIconSize(ui->green->size() * .8);

    update();
}

Painter::~Painter()
{
    delete ui;
}


//These change the color of the paint tool
void Painter::on_red_clicked()
{
    canvas->changeColor(Qt::red);
    update();
}

void Painter::on_blue_clicked()
{
    canvas->changeColor(Qt::blue);
    update();
}

void Painter::on_green_clicked()
{
    canvas->changeColor(Qt::green);
    update();
}

void Painter::on_purple_clicked()
{
    canvas->changeColor(Qt::black);
    update();
}


//These change the width of the paint tool
void Painter::on_width1_clicked()
{
    canvas->changeWidth(2);
    update();
}

void Painter::on_width2_clicked()
{
    canvas->changeWidth(3);
    update();
}

void Painter::on_width3_clicked()
{
    canvas->changeWidth(4);
    update();
}

void Painter::on_width4_clicked()
{
    canvas->changeWidth(5);
    update();
}


//These change the text and fonts of the text stamp tool
void Painter::on_face1_clicked()
{
    canvas->changeText(ui->face1->text());
    canvas->changeFont(ui->face1->font());
    update();
}

void Painter::on_face2_clicked()
{
    canvas->changeText(ui->face2->text());
    canvas->changeFont(ui->face2->font());
    update();
}

void Painter::on_hello1_clicked()
{
    canvas->changeText(ui->hello1->text());
    canvas->changeFont(ui->hello1->font());
    update();
}

void Painter::update()
{
    if (canvas->getColor() == Qt::red)
    {
        ui->red->setEnabled(false);
        ui->blue->setEnabled(true);
        ui->green->setEnabled(true);
        ui->purple->setEnabled(true);
    }

    else if (canvas->getColor() == Qt::green)
    {
        ui->red->setEnabled(true);
        ui->blue->setEnabled(true);
        ui->green->setEnabled(false);
        ui->purple->setEnabled(true);
    }

    else if (canvas->getColor() == Qt::blue)
    {
        ui->red->setEnabled(true);
        ui->blue->setEnabled(false);
        ui->green->setEnabled(true);
        ui->purple->setEnabled(true);
    }

    else if (canvas->getColor() == Qt::black)
    {
        ui->red->setEnabled(true);
        ui->blue->setEnabled(true);
        ui->green->setEnabled(true);
        ui->purple->setEnabled(false);
    }



    if (canvas->getWidth() == 3)
    {
        ui->width2->setEnabled(false);
        ui->width1->setEnabled(true);
        ui->width3->setEnabled(true);
        ui->width4->setEnabled(true);
    }

    else if (canvas->getWidth() == 4)
    {
        ui->width1->setEnabled(true);
        ui->width2->setEnabled(true);
        ui->width3->setEnabled(false);
        ui->width4->setEnabled(true);
    }

    else if (canvas->getWidth() == 5)
    {
        ui->width1->setEnabled(true);
        ui->width4->setEnabled(false);
        ui->width3->setEnabled(true);
        ui->width2->setEnabled(true);
    }

    else if (canvas->getWidth() == 2)
    {
        ui->width2->setEnabled(true);
        ui->width3->setEnabled(true);
        ui->width4->setEnabled(true);
        ui->width1->setEnabled(false);
    }


    if (canvas->getText() == ui->face1->text())
    {
        ui->face1->setEnabled(false);
        ui->face2->setEnabled(true);
        ui->hello1->setEnabled(true);
    }

    else if (canvas->getText() == ui->face2->text())
    {
        ui->face1->setEnabled(true);
        ui->hello1->setEnabled(true);
        ui->face2->setEnabled(false);
    }

    else if (canvas->getText() == ui->hello1->text())
    {
        ui->face1->setEnabled(true);
        ui->hello1->setEnabled(false);
        ui->face2->setEnabled(true);
    }

}
