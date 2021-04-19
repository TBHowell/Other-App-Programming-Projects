//Trent Howell
//1/13/19-1/16/19
//App Programing Project 2

#include "ui_dinermenu.h"
#include "dinermenu.h"

#include <iostream>

dinermenu::dinermenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dinermenu)
{
    ui->setupUi(this);

    loadImage();
}

/*Initial Image Load*/
void dinermenu::loadImage()
{
    //Name declarations
    QString soupFileName = "Chili.jpg";
    QString chefFileName = "Burger.jpg";
    QString fishFileName = "Fish.jpg";
    QString logoFileName = "Logo.PNG";


    //Each of these will confirm that the images have been loaded correctly and sizes them to the target destination
    if (imageSoup.load(soupFileName))
    {
        std::cout << "Soup image loaded successfully" << std::endl;
        imageSoup = imageSoup.scaled(ui->imagePlace->size(), Qt::KeepAspectRatioByExpanding);
    }

    if (imageChefs.load(chefFileName))
    {
        std::cout << "chef image loaded successfully" << std::endl;
        imageChefs = imageChefs.scaled(ui->imagePlace->size(), Qt::KeepAspectRatioByExpanding);
    }

    if (imageFish.load(fishFileName))
    {
        std::cout << "Fish image loaded successfully" << std::endl;
        imageFish = imageFish.scaled(ui->imagePlace->size(), Qt::KeepAspectRatioByExpanding);
    }

    if (imageLogo.load(logoFileName))
    {
        std::cout << "Logo image loaded successfully" << std::endl;
        imageLogo = imageLogo.scaled(ui->imagePlace->size(), Qt::KeepAspectRatioByExpanding);
    }

    //This sets the initial image and description
    ui->imagePlace->setPixmap(imageLogo);
    ui->itemInfo->setText("Welcome to the Hometown Comforts Diner,\nselect an item for more information");
}

dinermenu::~dinermenu()
{
    delete ui;
}

/*Change Page Info*/
void dinermenu::on_chef_clicked()
{
    //This sets the image and info box to display the data for the chef's special
    dinermenu::ui->imagePlace->setPixmap(dinermenu::imageChefs);
    dinermenu::ui->itemInfo->setText("Lamb Burger and Fries \n$12.98");
}

void dinermenu::on_fish_clicked()
{
    //This sets the image and info box to display the data for the daily fish
    dinermenu::ui->imagePlace->setPixmap(dinermenu::imageFish);
    dinermenu::ui->itemInfo->setText("Fried Rianbow Trout and Fries \n$9.45");
}

void dinermenu::on_soup_clicked()
{
    //This sets the image and info box to display the data for today's soup
    dinermenu::ui->imagePlace->setPixmap(dinermenu::imageSoup);
    dinermenu::ui->itemInfo->setText("Hometown Beef Chili \nCup: $6.47  Bowl: $8.65");
}

/*Application Quit*/
void dinermenu::on_exit_clicked()
{
    //This exists the application
    QApplication::quit();
}
