#include <QApplication>
//#include <QDialog>
#include "gotocelldialog.h"
//#include "ui_gotocelldialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //Ui::GoToCellDialog ui;
    //QDialog *dialog = new QDialog;
    //ui.setupUi(dialog);
    GoToCellDialog *dialog = new GoToCellDialog;
    dialog->show();
    return app.exec();
}