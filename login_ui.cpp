#include "login_ui.h"
#include "ui_login_ui.h"

Login_ui::Login_ui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_ui)
{
    ui->setupUi(this);
    connect(ui->toleftbtn,SIGNAL(pressed()),this,SLOT(on_toleftbtn_pressed()));
    connect(ui->toleftbtn,SIGNAL(released()),this,SLOT(on_toleftbtn_released()));
}

Login_ui::~Login_ui()
{
    delete ui;
}

void Login_ui::on_toleftbtn_pressed()
{
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/invagate/icons/to_left90_on.png"));
    ui->toleftbtn->setIcon(icon);
}

void Login_ui::on_toleftbtn_released()
{
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/invagate/icons/to_left90.png"));
    ui->toleftbtn->setIcon(icon);
    this->reject ();
    this->close ();
}

void Login_ui::on_torightbtn_pressed()
{
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/invagate/icons/to_right90_on.png"));
    ui->torightbtn->setIcon(icon);
}

void Login_ui::on_torightbtn_released()
{
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/invagate/icons/to_right90.png"));
    ui->torightbtn->setIcon(icon);
}
