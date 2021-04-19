//Trent Howell
//1/5/19-1/9/19
//App Programing Project 1

#include "p1window.h"
#include "ui_p1window.h"

P1Window::P1Window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::P1Window)
{
    ui->setupUi(this);
}

P1Window::~P1Window()
{
    delete ui;
}

/* Text Editing */
void P1Window::on_pushButton_clicked()
{
   QString newText = ui->changeText->toPlainText();

   //This ensures there is text inputed into the text editor and that it will not run out of room in the label box
   if(newText.length() > 0 && newText.length() < 26)
   {
    ui->targetTextLabel->setText(newText);
   }

   //This sets the text to instructions on valid label entries should the user enter too many/too few characters in the text editor
   else
   {
       ui->targetTextLabel->setText("Enter 1-26 Characters");
   }
}

/* Color Editing */
void P1Window::on_foreRedButton_clicked()
{
    QPalette palette = ui->targetTextLabel->palette();
    palette.setColor(QPalette::WindowText, Qt::red);

    //This sets the foreground color of the text box to red
    ui->targetTextLabel->setPalette(palette);
}


void P1Window::on_foreBlueButton_clicked()
{
    QPalette palette = ui->targetTextLabel->palette();
    palette.setColor(QPalette::WindowText, Qt::blue);

    //This sets the foreground color of the text box to blue
    ui->targetTextLabel->setPalette(palette);
}

void P1Window::on_backRedButton_clicked()
{
    QPalette palette = ui->targetTextLabel->palette();
    palette.setColor(QPalette::Window, Qt::red);

    //This sets the background color of the text box to red
    ui->targetTextLabel->setAutoFillBackground(true);
    ui->targetTextLabel->setPalette(palette);
}

void P1Window::on_backBlueButton_clicked()
{
    QPalette palette = ui->targetTextLabel->palette();
    palette.setColor(QPalette::Window, Qt::blue);

    //This sets the background color of the text box to blue
    ui->targetTextLabel->setAutoFillBackground(true);
    ui->targetTextLabel->setPalette(palette);
}

/* Alignment Editing */
void P1Window::on_textCenterButton_clicked()
{
    //This aligns the text to the center of the text box
    ui->targetTextLabel->setAlignment(Qt::AlignHCenter);
}

void P1Window::on_textRightButton_clicked()
{
    //This aligns the text to the right of the text box
    ui->targetTextLabel->setAlignment(Qt::AlignRight);

}

void P1Window::on_textLeftButton_clicked()
{
    //This aligns the text to the left of the text box
    ui->targetTextLabel->setAlignment(Qt::AlignLeft);
}


/* Exit Application */
void P1Window::on_endButton_clicked()
{
    //This exits the application
    QApplication::quit();
}
