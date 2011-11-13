#include <QtGui/QApplication>
#include "login_ui.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login_ui login;
    login.show ();
    return a.exec();
}
