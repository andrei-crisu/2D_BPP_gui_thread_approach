/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *bpp_view_button;
    QPushButton *settings_button;
    QPushButton *help_button;
    QPushButton *exit_button;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_7;
    QSplitter *splitter;
    QGroupBox *groupBox_11;
    QVBoxLayout *verticalLayout_10;
    QSplitter *splitter_3;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QGroupBox *groupBox_14;
    QVBoxLayout *verticalLayout_11;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *bin_width_input;
    QLabel *label_2;
    QLineEdit *bin_height_input;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *add_2;
    QPushButton *clear_2;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout_8;
    QTextEdit *masive_load_input;
    QHBoxLayout *horizontalLayout_8;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *rectangle_width_input;
    QLabel *label_4;
    QLineEdit *rectangle_height_input;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *process;
    QPushButton *add;
    QPushButton *load_from_file;
    QPushButton *clear;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_6;
    QTextEdit *status_window;
    QGroupBox *groupBox_10;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *clear_3;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QPushButton *run;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *home_2;
    QPushButton *help_2;
    QPushButton *settings_2;
    QWidget *page_2;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_17;
    QPushButton *pushButton_16;
    QPushButton *all_bins;
    QPushButton *previous_bin;
    QPushButton *next_bin;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *home;
    QPushButton *back;
    QPushButton *help;
    QPushButton *settings;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *refresh;
    QPushButton *zoom_out;
    QPushButton *zoom_in;
    QPushButton *zoom_to_fit;
    QPushButton *clear_screen;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 500);
        MainWindow->setMinimumSize(QSize(700, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/app_icons/package.png"), QSize(), QIcon::Normal, QIcon::On);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget\n"
"{\n"
"		background-color: rgb(232, 232, 194);\n"
"\n"
"\n"
"}\n"
""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8(""));
        gridLayout_2 = new QGridLayout(page);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 90, 0, 90);
        groupBox_3 = new QGroupBox(page);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(1000, 16777215));
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"border-style:none;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, 10, 10, 10);
        bpp_view_button = new QPushButton(groupBox_3);
        bpp_view_button->setObjectName(QString::fromUtf8("bpp_view_button"));
        bpp_view_button->setMinimumSize(QSize(160, 240));
        bpp_view_button->setMaximumSize(QSize(240, 360));
        bpp_view_button->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  24px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/app_icons/bpp.png"), QSize(), QIcon::Normal, QIcon::On);
        bpp_view_button->setIcon(icon1);
        bpp_view_button->setIconSize(QSize(160, 160));

        horizontalLayout_2->addWidget(bpp_view_button);

        settings_button = new QPushButton(groupBox_3);
        settings_button->setObjectName(QString::fromUtf8("settings_button"));
        settings_button->setMinimumSize(QSize(160, 240));
        settings_button->setMaximumSize(QSize(240, 360));
        settings_button->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  24px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/app_icons/settings.png"), QSize(), QIcon::Normal, QIcon::On);
        settings_button->setIcon(icon2);
        settings_button->setIconSize(QSize(140, 140));

        horizontalLayout_2->addWidget(settings_button);

        help_button = new QPushButton(groupBox_3);
        help_button->setObjectName(QString::fromUtf8("help_button"));
        help_button->setMinimumSize(QSize(160, 240));
        help_button->setMaximumSize(QSize(240, 360));
        help_button->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  24px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/app_icons/help.png"), QSize(), QIcon::Normal, QIcon::On);
        help_button->setIcon(icon3);
        help_button->setIconSize(QSize(140, 140));

        horizontalLayout_2->addWidget(help_button);

        exit_button = new QPushButton(groupBox_3);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));
        exit_button->setMinimumSize(QSize(160, 240));
        exit_button->setMaximumSize(QSize(240, 360));
        exit_button->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  24px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/app_icons/exit.png"), QSize(), QIcon::Normal, QIcon::On);
        exit_button->setIcon(icon4);
        exit_button->setIconSize(QSize(130, 130));

        horizontalLayout_2->addWidget(exit_button);


        gridLayout_2->addWidget(groupBox_3, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_5 = new QVBoxLayout(page_3);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(2, 0, 2, 0);
        groupBox_8 = new QGroupBox(page_3);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_7 = new QVBoxLayout(groupBox_8);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(groupBox_8);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setStyleSheet(QString::fromUtf8("QSplitter::handle\n"
"{\n"
"	background-color: rgba(45, 128, 100, 160);\n"
"}"));
        splitter->setOrientation(Qt::Vertical);
        splitter->setChildrenCollapsible(false);
        groupBox_11 = new QGroupBox(splitter);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        verticalLayout_10 = new QVBoxLayout(groupBox_11);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        splitter_3 = new QSplitter(groupBox_11);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setStyleSheet(QString::fromUtf8("QSplitter::handle\n"
"{\n"
"	background-color: rgba(45, 128, 100, 160);\n"
"}"));
        splitter_3->setOrientation(Qt::Horizontal);
        splitter_3->setChildrenCollapsible(false);
        groupBox_12 = new QGroupBox(splitter_3);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        QFont font;
        font.setPointSize(12);
        groupBox_12->setFont(font);
        verticalLayout_9 = new QVBoxLayout(groupBox_12);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_9->addItem(verticalSpacer_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(-1, 2, -1, 2);
        groupBox_14 = new QGroupBox(groupBox_12);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        groupBox_14->setMinimumSize(QSize(0, 50));
        verticalLayout_11 = new QVBoxLayout(groupBox_14);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(10);
        formLayout->setVerticalSpacing(14);
        label = new QLabel(groupBox_14);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(55, 22));
        label->setMaximumSize(QSize(55, 22));
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        bin_width_input = new QLineEdit(groupBox_14);
        bin_width_input->setObjectName(QString::fromUtf8("bin_width_input"));
        bin_width_input->setMinimumSize(QSize(115, 30));
        bin_width_input->setMaximumSize(QSize(16777215, 115));
        bin_width_input->setFont(font);
        bin_width_input->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"color: rgb(40, 46, 58);\n"
"background-color: rgba(45, 128, 100, 30);\n"
"}"));

        formLayout->setWidget(0, QFormLayout::FieldRole, bin_width_input);

        label_2 = new QLabel(groupBox_14);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(55, 22));
        label_2->setMaximumSize(QSize(55, 22));
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        bin_height_input = new QLineEdit(groupBox_14);
        bin_height_input->setObjectName(QString::fromUtf8("bin_height_input"));
        bin_height_input->setMinimumSize(QSize(115, 30));
        bin_height_input->setMaximumSize(QSize(16777215, 115));
        bin_height_input->setFont(font);
        bin_height_input->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"color: rgb(40, 46, 58);\n"
"background-color: rgba(45, 128, 100, 30);\n"
"}"));

        formLayout->setWidget(1, QFormLayout::FieldRole, bin_height_input);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        add_2 = new QPushButton(groupBox_14);
        add_2->setObjectName(QString::fromUtf8("add_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(add_2->sizePolicy().hasHeightForWidth());
        add_2->setSizePolicy(sizePolicy);
        add_2->setMinimumSize(QSize(50, 30));
        add_2->setMaximumSize(QSize(50, 30));
        add_2->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/app_icons/play.png"), QSize(), QIcon::Normal, QIcon::On);
        add_2->setIcon(icon5);
        add_2->setIconSize(QSize(26, 26));

        horizontalLayout_5->addWidget(add_2);

        clear_2 = new QPushButton(groupBox_14);
        clear_2->setObjectName(QString::fromUtf8("clear_2"));
        sizePolicy.setHeightForWidth(clear_2->sizePolicy().hasHeightForWidth());
        clear_2->setSizePolicy(sizePolicy);
        clear_2->setMinimumSize(QSize(50, 30));
        clear_2->setMaximumSize(QSize(50, 30));
        clear_2->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/app_icons/delete.png"), QSize(), QIcon::Disabled, QIcon::On);
        clear_2->setIcon(icon6);
        clear_2->setIconSize(QSize(26, 26));

        horizontalLayout_5->addWidget(clear_2);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_5);


        verticalLayout_11->addLayout(formLayout);


        horizontalLayout_9->addWidget(groupBox_14);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_8);


        verticalLayout_9->addLayout(horizontalLayout_9);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer);

        splitter_3->addWidget(groupBox_12);
        groupBox_13 = new QGroupBox(splitter_3);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        groupBox_13->setFont(font);
        verticalLayout_8 = new QVBoxLayout(groupBox_13);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        masive_load_input = new QTextEdit(groupBox_13);
        masive_load_input->setObjectName(QString::fromUtf8("masive_load_input"));
        masive_load_input->setMinimumSize(QSize(0, 30));
        masive_load_input->setFont(font);
        masive_load_input->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"color: rgb(40, 46, 58);\n"
"background-color: rgba(45, 128, 100, 30);\n"
"}"));

        verticalLayout_8->addWidget(masive_load_input);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_3 = new QLabel(groupBox_13);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(55, 22));
        label_3->setMaximumSize(QSize(55, 22));
        label_3->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        rectangle_width_input = new QLineEdit(groupBox_13);
        rectangle_width_input->setObjectName(QString::fromUtf8("rectangle_width_input"));
        rectangle_width_input->setMinimumSize(QSize(115, 30));
        rectangle_width_input->setMaximumSize(QSize(16777215, 115));
        rectangle_width_input->setFont(font);
        rectangle_width_input->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"color: rgb(40, 46, 58);\n"
"background-color: rgba(45, 128, 100, 30);\n"
"}"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, rectangle_width_input);

        label_4 = new QLabel(groupBox_13);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(55, 22));
        label_4->setMaximumSize(QSize(55, 22));
        label_4->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        rectangle_height_input = new QLineEdit(groupBox_13);
        rectangle_height_input->setObjectName(QString::fromUtf8("rectangle_height_input"));
        rectangle_height_input->setMinimumSize(QSize(115, 30));
        rectangle_height_input->setMaximumSize(QSize(16777215, 115));
        rectangle_height_input->setFont(font);
        rectangle_height_input->setStyleSheet(QString::fromUtf8("QLineEdit\n"
"{\n"
"color: rgb(40, 46, 58);\n"
"background-color: rgba(45, 128, 100, 30);\n"
"}"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, rectangle_height_input);


        horizontalLayout_8->addLayout(formLayout_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        verticalLayout_8->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, -1, 4, -1);
        horizontalSpacer_6 = new QSpacerItem(68, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        process = new QPushButton(groupBox_13);
        process->setObjectName(QString::fromUtf8("process"));
        sizePolicy.setHeightForWidth(process->sizePolicy().hasHeightForWidth());
        process->setSizePolicy(sizePolicy);
        process->setMinimumSize(QSize(50, 30));
        process->setMaximumSize(QSize(50, 30));
        process->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/app_icons/data-processing.png"), QSize(), QIcon::Normal, QIcon::On);
        process->setIcon(icon7);
        process->setIconSize(QSize(28, 28));

        horizontalLayout_6->addWidget(process);

        add = new QPushButton(groupBox_13);
        add->setObjectName(QString::fromUtf8("add"));
        sizePolicy.setHeightForWidth(add->sizePolicy().hasHeightForWidth());
        add->setSizePolicy(sizePolicy);
        add->setMinimumSize(QSize(50, 30));
        add->setMaximumSize(QSize(50, 30));
        add->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/app_icons/add.png"), QSize(), QIcon::Normal, QIcon::On);
        add->setIcon(icon8);
        add->setIconSize(QSize(26, 26));

        horizontalLayout_6->addWidget(add);

        load_from_file = new QPushButton(groupBox_13);
        load_from_file->setObjectName(QString::fromUtf8("load_from_file"));
        sizePolicy.setHeightForWidth(load_from_file->sizePolicy().hasHeightForWidth());
        load_from_file->setSizePolicy(sizePolicy);
        load_from_file->setMinimumSize(QSize(50, 30));
        load_from_file->setMaximumSize(QSize(50, 30));
        load_from_file->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/icons/app_icons/file.png"), QSize(), QIcon::Normal, QIcon::On);
        load_from_file->setIcon(icon9);
        load_from_file->setIconSize(QSize(24, 24));

        horizontalLayout_6->addWidget(load_from_file);

        clear = new QPushButton(groupBox_13);
        clear->setObjectName(QString::fromUtf8("clear"));
        sizePolicy.setHeightForWidth(clear->sizePolicy().hasHeightForWidth());
        clear->setSizePolicy(sizePolicy);
        clear->setMinimumSize(QSize(50, 30));
        clear->setMaximumSize(QSize(50, 30));
        clear->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/icons/app_icons/delete.png"), QSize(), QIcon::Normal, QIcon::On);
        clear->setIcon(icon10);
        clear->setIconSize(QSize(26, 26));

        horizontalLayout_6->addWidget(clear);


        verticalLayout_8->addLayout(horizontalLayout_6);

        splitter_3->addWidget(groupBox_13);

        verticalLayout_10->addWidget(splitter_3);

        splitter->addWidget(groupBox_11);
        groupBox_9 = new QGroupBox(splitter);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy1);
        groupBox_9->setMinimumSize(QSize(0, 120));
        groupBox_9->setMaximumSize(QSize(16777215, 200));
        groupBox_9->setFont(font);
        verticalLayout_6 = new QVBoxLayout(groupBox_9);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        status_window = new QTextEdit(groupBox_9);
        status_window->setObjectName(QString::fromUtf8("status_window"));
        sizePolicy1.setHeightForWidth(status_window->sizePolicy().hasHeightForWidth());
        status_window->setSizePolicy(sizePolicy1);
        status_window->setMinimumSize(QSize(0, 30));
        status_window->setFont(font);
        status_window->setStyleSheet(QString::fromUtf8("QTextEdit\n"
"{\n"
"color: rgb(40, 46, 58);\n"
"background-color: rgba(45, 128, 100, 80);\n"
"}"));
        status_window->setReadOnly(true);

        verticalLayout_6->addWidget(status_window);

        groupBox_10 = new QGroupBox(groupBox_9);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        sizePolicy1.setHeightForWidth(groupBox_10->sizePolicy().hasHeightForWidth());
        groupBox_10->setSizePolicy(sizePolicy1);
        groupBox_10->setMinimumSize(QSize(0, 34));
        groupBox_10->setMaximumSize(QSize(16777215, 34));
        groupBox_10->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background-color:none;\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_10);
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(2, 0, 2, 0);
        horizontalSpacer_4 = new QSpacerItem(292, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        clear_3 = new QPushButton(groupBox_10);
        clear_3->setObjectName(QString::fromUtf8("clear_3"));
        sizePolicy.setHeightForWidth(clear_3->sizePolicy().hasHeightForWidth());
        clear_3->setSizePolicy(sizePolicy);
        clear_3->setMinimumSize(QSize(50, 30));
        clear_3->setMaximumSize(QSize(50, 30));
        clear_3->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        clear_3->setIcon(icon10);
        clear_3->setIconSize(QSize(26, 26));

        horizontalLayout_4->addWidget(clear_3);


        verticalLayout_6->addWidget(groupBox_10);

        splitter->addWidget(groupBox_9);

        verticalLayout_7->addWidget(splitter);


        verticalLayout_5->addWidget(groupBox_8);

        groupBox_7 = new QGroupBox(page_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setMinimumSize(QSize(0, 34));
        groupBox_7->setMaximumSize(QSize(16777215, 34));
        groupBox_7->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background-color:none;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_7);
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 20, 0);
        horizontalSpacer_3 = new QSpacerItem(292, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(groupBox_7);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(50, 30));
        pushButton->setMaximumSize(QSize(50, 30));
        pushButton->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        pushButton->setIcon(icon6);
        pushButton->setIconSize(QSize(26, 26));

        horizontalLayout_3->addWidget(pushButton);

        run = new QPushButton(groupBox_7);
        run->setObjectName(QString::fromUtf8("run"));
        sizePolicy.setHeightForWidth(run->sizePolicy().hasHeightForWidth());
        run->setSizePolicy(sizePolicy);
        run->setMinimumSize(QSize(50, 30));
        run->setMaximumSize(QSize(50, 30));
        run->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/icons/app_icons/run.png"), QSize(), QIcon::Normal, QIcon::On);
        run->setIcon(icon11);
        run->setIconSize(QSize(26, 26));

        horizontalLayout_3->addWidget(run);

        horizontalSpacer_9 = new QSpacerItem(133, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        home_2 = new QPushButton(groupBox_7);
        home_2->setObjectName(QString::fromUtf8("home_2"));
        sizePolicy.setHeightForWidth(home_2->sizePolicy().hasHeightForWidth());
        home_2->setSizePolicy(sizePolicy);
        home_2->setMinimumSize(QSize(50, 30));
        home_2->setMaximumSize(QSize(50, 30));
        home_2->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/icons/app_icons/home.png"), QSize(), QIcon::Normal, QIcon::On);
        home_2->setIcon(icon12);
        home_2->setIconSize(QSize(28, 28));

        horizontalLayout_3->addWidget(home_2);

        help_2 = new QPushButton(groupBox_7);
        help_2->setObjectName(QString::fromUtf8("help_2"));
        sizePolicy.setHeightForWidth(help_2->sizePolicy().hasHeightForWidth());
        help_2->setSizePolicy(sizePolicy);
        help_2->setMinimumSize(QSize(50, 30));
        help_2->setMaximumSize(QSize(50, 30));
        help_2->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        help_2->setIcon(icon3);
        help_2->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(help_2);

        settings_2 = new QPushButton(groupBox_7);
        settings_2->setObjectName(QString::fromUtf8("settings_2"));
        sizePolicy.setHeightForWidth(settings_2->sizePolicy().hasHeightForWidth());
        settings_2->setSizePolicy(sizePolicy);
        settings_2->setMinimumSize(QSize(50, 30));
        settings_2->setMaximumSize(QSize(50, 30));
        settings_2->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        settings_2->setIcon(icon2);
        settings_2->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(settings_2);


        verticalLayout_5->addWidget(groupBox_7);

        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setStyleSheet(QString::fromUtf8("	background-color: rgb(232, 232, 194);\n"
""));
        gridLayout = new QGridLayout(page_2);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"border-style:none;\n"
" background-color: none;\n"
"}"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_2);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"border-style:none;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background-color:none;\n"
"}"));
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(groupBox_5);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(232, 232, 194);"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        verticalLayout_4->addWidget(graphicsView);

        groupBox_6 = new QGroupBox(groupBox_5);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setMinimumSize(QSize(0, 34));
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background-color:none;\n"
"}"));
        horizontalLayout = new QHBoxLayout(groupBox_6);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 0, 2, 0);
        pushButton_17 = new QPushButton(groupBox_6);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        sizePolicy.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy);
        pushButton_17->setMinimumSize(QSize(50, 30));
        pushButton_17->setMaximumSize(QSize(50, 30));
        pushButton_17->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        pushButton_17->setIconSize(QSize(28, 28));

        horizontalLayout->addWidget(pushButton_17);

        pushButton_16 = new QPushButton(groupBox_6);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        sizePolicy.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy);
        pushButton_16->setMinimumSize(QSize(50, 30));
        pushButton_16->setMaximumSize(QSize(50, 30));
        pushButton_16->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        pushButton_16->setIconSize(QSize(28, 28));

        horizontalLayout->addWidget(pushButton_16);

        all_bins = new QPushButton(groupBox_6);
        all_bins->setObjectName(QString::fromUtf8("all_bins"));
        sizePolicy.setHeightForWidth(all_bins->sizePolicy().hasHeightForWidth());
        all_bins->setSizePolicy(sizePolicy);
        all_bins->setMinimumSize(QSize(50, 30));
        all_bins->setMaximumSize(QSize(50, 30));
        all_bins->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/icons/app_icons/all.png"), QSize(), QIcon::Normal, QIcon::On);
        all_bins->setIcon(icon13);
        all_bins->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(all_bins);

        previous_bin = new QPushButton(groupBox_6);
        previous_bin->setObjectName(QString::fromUtf8("previous_bin"));
        sizePolicy.setHeightForWidth(previous_bin->sizePolicy().hasHeightForWidth());
        previous_bin->setSizePolicy(sizePolicy);
        previous_bin->setMinimumSize(QSize(50, 30));
        previous_bin->setMaximumSize(QSize(50, 30));
        previous_bin->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/icons/app_icons/previous.png"), QSize(), QIcon::Normal, QIcon::On);
        previous_bin->setIcon(icon14);
        previous_bin->setIconSize(QSize(28, 28));

        horizontalLayout->addWidget(previous_bin);

        next_bin = new QPushButton(groupBox_6);
        next_bin->setObjectName(QString::fromUtf8("next_bin"));
        sizePolicy.setHeightForWidth(next_bin->sizePolicy().hasHeightForWidth());
        next_bin->setSizePolicy(sizePolicy);
        next_bin->setMinimumSize(QSize(50, 30));
        next_bin->setMaximumSize(QSize(50, 30));
        next_bin->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/icons/app_icons/next.png"), QSize(), QIcon::Normal, QIcon::On);
        next_bin->setIcon(icon15);
        next_bin->setIconSize(QSize(28, 28));

        horizontalLayout->addWidget(next_bin);

        horizontalSpacer_2 = new QSpacerItem(292, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        home = new QPushButton(groupBox_6);
        home->setObjectName(QString::fromUtf8("home"));
        sizePolicy.setHeightForWidth(home->sizePolicy().hasHeightForWidth());
        home->setSizePolicy(sizePolicy);
        home->setMinimumSize(QSize(50, 30));
        home->setMaximumSize(QSize(50, 30));
        home->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        home->setIcon(icon12);
        home->setIconSize(QSize(28, 28));

        horizontalLayout->addWidget(home);

        back = new QPushButton(groupBox_6);
        back->setObjectName(QString::fromUtf8("back"));
        sizePolicy.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy);
        back->setMinimumSize(QSize(50, 30));
        back->setMaximumSize(QSize(50, 30));
        back->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/icons/app_icons/back.png"), QSize(), QIcon::Normal, QIcon::On);
        back->setIcon(icon16);
        back->setIconSize(QSize(28, 28));

        horizontalLayout->addWidget(back);

        help = new QPushButton(groupBox_6);
        help->setObjectName(QString::fromUtf8("help"));
        sizePolicy.setHeightForWidth(help->sizePolicy().hasHeightForWidth());
        help->setSizePolicy(sizePolicy);
        help->setMinimumSize(QSize(50, 30));
        help->setMaximumSize(QSize(50, 30));
        help->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        help->setIcon(icon3);
        help->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(help);

        settings = new QPushButton(groupBox_6);
        settings->setObjectName(QString::fromUtf8("settings"));
        sizePolicy.setHeightForWidth(settings->sizePolicy().hasHeightForWidth());
        settings->setSizePolicy(sizePolicy);
        settings->setMinimumSize(QSize(50, 30));
        settings->setMaximumSize(QSize(50, 30));
        settings->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        settings->setIcon(icon2);
        settings->setIconSize(QSize(24, 24));

        horizontalLayout->addWidget(settings);


        verticalLayout_4->addWidget(groupBox_6);


        verticalLayout_3->addWidget(groupBox_5);


        horizontalLayout_7->addWidget(groupBox_4);

        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(70, 16777215));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"border-style:none;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        refresh = new QPushButton(groupBox);
        refresh->setObjectName(QString::fromUtf8("refresh"));
        sizePolicy.setHeightForWidth(refresh->sizePolicy().hasHeightForWidth());
        refresh->setSizePolicy(sizePolicy);
        refresh->setMinimumSize(QSize(50, 30));
        refresh->setMaximumSize(QSize(50, 30));
        refresh->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/icons/app_icons/refresh.png"), QSize(), QIcon::Normal, QIcon::On);
        refresh->setIcon(icon17);
        refresh->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(refresh);

        zoom_out = new QPushButton(groupBox);
        zoom_out->setObjectName(QString::fromUtf8("zoom_out"));
        sizePolicy.setHeightForWidth(zoom_out->sizePolicy().hasHeightForWidth());
        zoom_out->setSizePolicy(sizePolicy);
        zoom_out->setMinimumSize(QSize(50, 30));
        zoom_out->setMaximumSize(QSize(50, 30));
        zoom_out->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/icons/app_icons/zoom_out.png"), QSize(), QIcon::Normal, QIcon::On);
        zoom_out->setIcon(icon18);
        zoom_out->setIconSize(QSize(28, 28));

        verticalLayout_2->addWidget(zoom_out);

        zoom_in = new QPushButton(groupBox);
        zoom_in->setObjectName(QString::fromUtf8("zoom_in"));
        sizePolicy.setHeightForWidth(zoom_in->sizePolicy().hasHeightForWidth());
        zoom_in->setSizePolicy(sizePolicy);
        zoom_in->setMinimumSize(QSize(50, 30));
        zoom_in->setMaximumSize(QSize(50, 30));
        zoom_in->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/icons/app_icons/zoom_in.png"), QSize(), QIcon::Normal, QIcon::On);
        zoom_in->setIcon(icon19);
        zoom_in->setIconSize(QSize(28, 28));

        verticalLayout_2->addWidget(zoom_in);

        zoom_to_fit = new QPushButton(groupBox);
        zoom_to_fit->setObjectName(QString::fromUtf8("zoom_to_fit"));
        sizePolicy.setHeightForWidth(zoom_to_fit->sizePolicy().hasHeightForWidth());
        zoom_to_fit->setSizePolicy(sizePolicy);
        zoom_to_fit->setMinimumSize(QSize(50, 30));
        zoom_to_fit->setMaximumSize(QSize(50, 30));
        zoom_to_fit->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/icons/app_icons/zoom_to_fit.png"), QSize(), QIcon::Normal, QIcon::On);
        zoom_to_fit->setIcon(icon20);
        zoom_to_fit->setIconSize(QSize(28, 28));

        verticalLayout_2->addWidget(zoom_to_fit);

        clear_screen = new QPushButton(groupBox);
        clear_screen->setObjectName(QString::fromUtf8("clear_screen"));
        sizePolicy.setHeightForWidth(clear_screen->sizePolicy().hasHeightForWidth());
        clear_screen->setSizePolicy(sizePolicy);
        clear_screen->setMinimumSize(QSize(50, 30));
        clear_screen->setMaximumSize(QSize(50, 30));
        clear_screen->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	 background-color: rgba(41, 90, 86, 80);\n"
"	  border-color: rgb(41, 90, 86);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"      font:  14px; \n"
"	  color: rgb(41, 90, 86);\n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	 background-color: rgba(167, 206, 151,120);\n"
"	  border-color: rgba(41, 90, 86,164);\n"
"      border-style:solid;\n"
"  }"));
        clear_screen->setIcon(icon10);
        clear_screen->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(clear_screen);

        horizontalSpacer = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(horizontalSpacer);


        horizontalLayout_7->addWidget(groupBox);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 700, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "2D Bin Packing Problem", nullptr));
        groupBox_3->setTitle(QString());
#if QT_CONFIG(tooltip)
        bpp_view_button->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">2D Bin Packing Problem</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        bpp_view_button->setText(QString());
#if QT_CONFIG(tooltip)
        settings_button->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Settings</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        settings_button->setText(QString());
#if QT_CONFIG(tooltip)
        help_button->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Help</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        help_button->setText(QString());
#if QT_CONFIG(tooltip)
        exit_button->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt;\">Exit</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        exit_button->setText(QString());
        groupBox_8->setTitle(QString());
        groupBox_11->setTitle(QString());
        groupBox_12->setTitle(QCoreApplication::translate("MainWindow", "Edit Bin", nullptr));
        groupBox_14->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Width:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Height:", nullptr));
#if QT_CONFIG(tooltip)
        add_2->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>save bin size</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        add_2->setText(QString());
#if QT_CONFIG(tooltip)
        clear_2->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">clear</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        clear_2->setText(QString());
        groupBox_13->setTitle(QCoreApplication::translate("MainWindow", "Add Rectangles", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Width:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Height:", nullptr));
#if QT_CONFIG(tooltip)
        process->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">process data loaded from file</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        process->setText(QString());
#if QT_CONFIG(tooltip)
        add->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">add rectangle</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        add->setText(QString());
#if QT_CONFIG(tooltip)
        load_from_file->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">load data from file</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        load_from_file->setText(QString());
#if QT_CONFIG(tooltip)
        clear->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">clear rectangle data</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        clear->setText(QString());
        groupBox_9->setTitle(QCoreApplication::translate("MainWindow", "Operation Status", nullptr));
        groupBox_10->setTitle(QString());
#if QT_CONFIG(tooltip)
        clear_3->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">clear Operation Status window</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        clear_3->setText(QString());
        groupBox_7->setTitle(QString());
#if QT_CONFIG(tooltip)
        pushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">clear</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QString());
#if QT_CONFIG(tooltip)
        run->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">run algorithm</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        home_2->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">home</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        home_2->setText(QString());
#if QT_CONFIG(tooltip)
        help_2->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">help</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        help_2->setText(QString());
#if QT_CONFIG(tooltip)
        settings_2->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">settings</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        settings_2->setText(QString());
        groupBox_2->setTitle(QString());
        groupBox_4->setTitle(QString());
        groupBox_5->setTitle(QString());
        groupBox_6->setTitle(QString());
        pushButton_17->setText(QString());
        pushButton_16->setText(QString());
#if QT_CONFIG(tooltip)
        all_bins->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">show all bins</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        all_bins->setText(QString());
#if QT_CONFIG(tooltip)
        previous_bin->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">show previous bin</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        previous_bin->setText(QString());
#if QT_CONFIG(tooltip)
        next_bin->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">show next bin</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        next_bin->setText(QString());
#if QT_CONFIG(tooltip)
        home->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">home</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        home->setText(QString());
#if QT_CONFIG(tooltip)
        back->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">back</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        back->setText(QString());
#if QT_CONFIG(tooltip)
        help->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">help</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        help->setText(QString());
#if QT_CONFIG(tooltip)
        settings->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">settings</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        settings->setText(QString());
        groupBox->setTitle(QString());
#if QT_CONFIG(tooltip)
        refresh->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">refresh</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        refresh->setText(QString());
#if QT_CONFIG(tooltip)
        zoom_out->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">zoom out</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        zoom_out->setText(QString());
#if QT_CONFIG(tooltip)
        zoom_in->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">zoom in</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        zoom_in->setText(QString());
#if QT_CONFIG(tooltip)
        zoom_to_fit->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">zoom to fit</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        zoom_to_fit->setText(QString());
#if QT_CONFIG(tooltip)
        clear_screen->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">clear</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        clear_screen->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
