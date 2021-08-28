#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //
    scene=new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    event->ignore();
    QMessageBox msgBox;
    msgBox.setText(tr("Exit?                        "));
    QAbstractButton* pButtonYes = msgBox.addButton(tr("Yes"), QMessageBox::YesRole);
    QAbstractButton* pButtonNo = msgBox.addButton(tr("No"), QMessageBox::NoRole);
    //No button
    pButtonNo->setMinimumSize(100,24);
    pButtonNo->setStyleSheet(
                "  QPushButton {"
"background-color: rgba(41, 90, 86, 80);"
"border-color: rgb(41, 90, 86);"
"border-style:solid;"
"border-width:1px;"
"font:  20px; "
"color: rgb(41, 90, 86);}"
"QPushButton:hover:!pressed {"
"background-color: rgba(167, 206, 151,120);"
"border-color: rgba(41, 90, 86,164);"
"border-style:solid;}");

    //Yes button
    pButtonYes->setMinimumSize(100,24);
    pButtonYes->setStyleSheet(
                "  QPushButton {"
"background-color: rgba(41, 90, 86, 80);"
"border-color: rgb(41, 90, 86);"
"border-style:solid;"
"border-width:1px;"
"font:  20px; "
"color: #a6000d;}"
"QPushButton:hover:!pressed {"
"background-color: #bbcfd7;"
"border-color: #a6000d;"
"border-style:solid;}");


    //msgBox
    QPixmap exportSuccess(":icons/app_icons/exit_32.png");
    QIcon icon(":icons/app_icons/package.png");
    QFont font("Consolas",14);
    msgBox.setFont(font);
    msgBox.setWindowIcon(icon);
    msgBox.setIconPixmap(exportSuccess);
    msgBox.setStyleSheet(
                "QLabel{min-width: 200px;"
                "text-align:left"
                "min-height: 100px;  }"
                "QMessageBox{"
                "background-color: #f6fceb;"
                "color: #173c45;}");

    msgBox.exec();
    if (msgBox.clickedButton()==pButtonYes)
    {
        event->accept();
    }

}

void MainWindow::on_pushButton_clicked()
{   //clear first
    scene->clear();
    ui->graphicsView->viewport()->update();
    ui->graphicsView->items().clear();
    //than draw
    QBrush greenBrush(QColor(164, 147, 147));
    QBrush blueBrush(QColor(76,187,23));
    QPen outlinePen(QColor(218,112,214));
    outlinePen.setWidth(1);
    QGraphicsRectItem *rect=scene->addRect(0,0,1000,1000,outlinePen);
    for(int i=0,j=40;i<=400;i+=80,j+=80)
    {
        scene->addRect(j, j, 40, 40, outlinePen, blueBrush);
        scene->addRect(i,i, 40, 40, outlinePen, greenBrush);
    }
    //after
    //zoom to fit
    ui->graphicsView->fitInView(0,0,1024,1024,Qt::AspectRatioMode::KeepAspectRatio);
}

void MainWindow::on_pushButton_2_clicked()
{   //zoom in
    ui->graphicsView->scale(1.1,1.1);
}

void MainWindow::on_pushButton_3_clicked()
{
    //zoom out
    ui->graphicsView->scale(0.9,0.9);
}

void MainWindow::on_pushButton_5_clicked()
{
    //clear
    scene->clear();
    ui->graphicsView->viewport()->update();
    ui->graphicsView->items().clear();
}

void MainWindow::on_pushButton_6_clicked()
{
    //zoom to fit
    ui->graphicsView->fitInView(0,0,1024,1024,Qt::AspectRatioMode::KeepAspectRatio);
}

void MainWindow::on_exit_button_clicked()
{
    close();
}

void MainWindow::on_help_button_clicked()
{

}

void MainWindow::on_settings_button_clicked()
{

}

void MainWindow::on_bpp_view_button_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_home_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_help_clicked()
{

}

void MainWindow::on_settings_clicked()
{

}
