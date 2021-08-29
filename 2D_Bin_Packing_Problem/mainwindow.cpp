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

void MainWindow::on_refresh_clicked()
{
    //clear first
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

void MainWindow::on_zoom_out_clicked()
{
    //zoom out
    ui->graphicsView->scale(0.9,0.9);
}

void MainWindow::on_zoom_in_clicked()
{
    //zoom in
    ui->graphicsView->scale(1.1,1.1);
}

void MainWindow::on_zoom_to_fit_clicked()
{
    //zoom to fit
    ui->graphicsView->fitInView(0,0,1024,1024,Qt::AspectRatioMode::KeepAspectRatio);
}

void MainWindow::on_clear_screen_clicked()
{
    //clear
    scene->clear();
    ui->graphicsView->viewport()->update();
    ui->graphicsView->items().clear();
}

void MainWindow::on_all_bins_clicked()
{

}

void MainWindow::on_previous_bin_clicked()
{

}

void MainWindow::on_next_bin_clicked()
{

}

void MainWindow::on_clear_2_clicked()
{
    ui->bin_height_input->clear();
    ui->bin_width_input->clear();
}

void MainWindow::on_clear_clicked()
{
    ui->rectangle_height_input->clear();
    ui->rectangle_width_input->clear();
    ui->masive_load_input->clear();
}

void MainWindow::on_clear_3_clicked()
{
    ui->status_window->clear();
}

void MainWindow::on_home_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_help_2_clicked()
{

}

void MainWindow::on_settings_2_clicked()
{

}

void MainWindow::on_load_from_file_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), QString(),
                                                    tr("Text Files (*.txt);;"));

    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
            return;
        }
        QTextStream in(&file);
        ui->masive_load_input->setText(in.readAll());
        file.close();
    }
}

void MainWindow::on_add_clicked()
{
    QString rect_height_str,rect_width_str;

}

void MainWindow::on_run_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_process_clicked()
{

}
