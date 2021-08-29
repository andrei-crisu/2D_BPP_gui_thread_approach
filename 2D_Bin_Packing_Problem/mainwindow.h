#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QGraphicsScene>
#include<QGraphicsView>
#include<QGraphicsItem>
#include<QCloseEvent>
#include<QMessageBox>
#include<QFileDialog>

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

    void on_all_bins_clicked();

    void on_previous_bin_clicked();

    void on_next_bin_clicked();

    void on_clear_2_clicked();

    void on_clear_clicked();

    void on_clear_3_clicked();

    void on_home_2_clicked();

    void on_help_2_clicked();

    void on_settings_2_clicked();

    void on_load_from_file_clicked();

    void on_add_clicked();

    void on_run_clicked();

    void on_process_clicked();

private:
    Ui::MainWindow *ui;

    QGraphicsScene *scene;
};
#endif // MAINWINDOW_H
