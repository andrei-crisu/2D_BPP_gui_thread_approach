#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),all_objects(),all_bins()
{
    ui->setupUi(this);

    //
    scene=new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    container_height=0;
    container_width=0;

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

void MainWindow::on_run_clicked()
{
    //ui->stackedWidget->setCurrentIndex(2);
    try
        {
        if(all_objects.isEmpty())
            throw Exception ("Empty: No any rectangle to display!");
        ui->stackedWidget->setCurrentIndex(2);
        //sorting objects vector descending by area
        quickSort(all_objects,0,all_objects.length()-1);
        //clear first
        scene->clear();
        ui->graphicsView->viewport()->update();
        ui->graphicsView->items().clear();
        //than draw
        QBrush brush(QColor("#0e1e35E1"));
        QBrush blueBrush(QColor(76,187,23));
        QPen outlinePen(QColor(128,0,0,200));
        outlinePen.setWidth(1);
        //QGraphicsRectItem *rect=scene->addRect(0,0,1000,1000,outlinePen);
        MyObject obj;
        double max_w,max_h,all_w,all_h;
        max_w=max_h=0;
        all_h=all_w=20;
        for(int i=0;i<all_objects.length();i++)
        {
            obj=all_objects.at(i);
            if(obj.getWidth()>max_w)
                max_w=obj.getWidth();
            if(obj.getHeight()>max_h)
                max_h=obj.getHeight();
            scene->addRect(20,all_h, obj.getWidth(),obj.getHeight(), outlinePen,brush);
            all_h+=obj.getHeight();
            all_h+=2;
            all_w+=obj.getWidth();
        }
        //after
        //zoom to fit
        ui->graphicsView->fitInView(0,0,max_w+40,all_h,Qt::AspectRatioMode::KeepAspectRatio);
        }catch(Exception &e)
        {
           printOutput(ui->status_window,e.what(),DARK_RED);
        }


}


void MainWindow::on_process_clicked()
{
    QString data_str=ui->masive_load_input->toPlainText();
    try {
        if(data_str.isEmpty())
            throw Exception("Empty: No data provided!");
        DataParser parser(data_str);
        all_objects.append(parser.getRectList());
        QString str=parser.listAsString();
        str="Rectangles added: {"+str+"}";
        printOutput(ui->status_window,str,DARK_BLUE);
    }  catch (Exception &e){
        printStatus(ui->status_window,e.what(),DARK_RED);
    }
}

void MainWindow::on_add_clicked()
{
    try {
        QString w_string,h_string;
        bool ok;
        double w,h;
        w_string=ui->rectangle_width_input->text();
        h_string=ui->rectangle_height_input->text();
        if(w_string.isEmpty())
            throw Exception("Empty: the width of the rectangle is not specified");
        if(h_string.isEmpty())
            throw Exception("Empty: the height of the rectangle is not specified");

        ok=false;
        w=w_string.toDouble(&ok);
        if(!ok)
            throw Exception("Error: [ "+w_string+" ] contain mistakes;  it is not a number !");

        ok=false;
        h=h_string.toDouble(&ok);
        if(!ok)
            throw Exception("Error: [ "+h_string+" ] contain mistakes;  it is not a number !");

        if(w<0||h<0)
            throw Exception("Rectangle can't have any negative dimension(width/height)"
": [ ("+w_string+","+h_string+") ]");
        all_objects.append(MyObject(w,h));
        printStatus(ui->status_window,"Rectangle added: "
"["+QString::number(w)+","+QString::number(h)+"];",DARK_BLUE);

    }catch (Exception &e) {
        printStatus(ui->status_window,e.what(),DARK_RED);
    }
}

void MainWindow::on_set_container_clicked()
{
    try {
        QString w_string,h_string;
        bool ok;
        double w,h;
        w_string=ui->bin_width_input->text();
        h_string=ui->bin_height_input->text();
        if(w_string.isEmpty())
            throw Exception("Empty: the width of the bin is not specified");
        if(h_string.isEmpty())
            throw Exception("Empty: the height of the bin is not specified");

        ok=false;
        w=w_string.toDouble(&ok);
        if(!ok)
            throw Exception("Error: [ "+w_string+" ] contain mistakes;  it is not a number !");

        ok=false;
        h=h_string.toDouble(&ok);
        if(!ok)
            throw Exception("Error: [ "+h_string+" ] contain mistakes;  it is not a number !");

        if(w<0||h<0)
            throw Exception("a bin can't have any negative dimension(width/height)"
": [ ("+w_string+","+h_string+") ]");
        container_width=w;
        container_height=h;
        printStatus(ui->status_window,"Bin size updated: "
"["+QString::number(w)+","+QString::number(h)+"];",DARK_BLUE);

    }catch (Exception &e) {
        printStatus(ui->status_window,e.what(),DARK_RED);
    }
}

void MainWindow::on_clear_stored_data_clicked()
{
    container_height=container_height=0;
    all_bins.clear();
    all_objects.clear();
}
