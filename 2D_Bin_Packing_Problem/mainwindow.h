#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QGraphicsItem>
#include<QCloseEvent>
#include<QMessageBox>
#include<QFileDialog>
#include "dataparser.h"
#include"io_interface.h"
#include"my_constants.h"
#include"myobject.h"
#include "bincontainer.h"
#include"sorting_algorithm.h"
#include<QThread>
#include<QtCore>
#include"worker.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void closeEvent(QCloseEvent *event);
    void sendInforMessage(const QString &message);

private slots:
    void on_exit_button_clicked();

    void on_help_button_clicked();

    void on_settings_button_clicked();

    void on_bpp_view_button_clicked();

    void on_home_clicked();

    void on_back_clicked();

    void on_help_clicked();

    void on_settings_clicked();

    void on_refresh_clicked();

    void on_zoom_out_clicked();

    void on_zoom_in_clicked();

    void on_zoom_to_fit_clicked();

    void on_clear_screen_clicked();

    void on_previous_bin_clicked();

    void on_next_bin_clicked();

    void on_clear_2_clicked();

    void on_clear_clicked();

    void on_clear_3_clicked();

    void on_home_2_clicked();

    void on_help_2_clicked();

    void on_settings_2_clicked();

    void on_load_from_file_clicked();

    void on_run_clicked();

    void on_process_clicked();

    void on_add_clicked();

    void on_set_container_clicked();

    void on_clear_stored_data_clicked();

    void on_home_4_clicked();

    void on_to_packing_clicked();

    void on_help_4_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_home_5_clicked();

    void on_to_packing_2_clicked();

    void on_settings_3_clicked();

    void on_transparency_slider_valueChanged(int value);

    void handleResult(QVector<BinContainer> &bins);

    void showMessage(const QString &message);

    void on_display_bins_clicked();

signals:
    void askToPack();
    void endPackingTask();
    void infoMessage(const QString &message);

private:
    Ui::MainWindow *ui;

    QGraphicsScene *scene;
    QVector<MyObject> all_objects;
    QVector<BinContainer> all_bins;
    double container_width,container_height;
    int draw_bin_iterator;
    double placing_step;

};
#endif // MAINWINDOW_H
