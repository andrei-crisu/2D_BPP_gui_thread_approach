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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
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
    QGroupBox *groupBox_7;
    QGroupBox *groupBox_8;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_15;
    QPushButton *pushButton_14;
    QPushButton *all_bins;
    QPushButton *previous_bin;
    QPushButton *next_bin;
    QPushButton *clear_screen;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *home_2;
    QPushButton *help_2;
    QPushButton *settings_2;
    QWidget *page_2;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QSplitter *splitter;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_17;
    QPushButton *pushButton_16;
    QPushButton *all_bins_2;
    QPushButton *previous_bin_2;
    QPushButton *next_bin_2;
    QPushButton *clear_screen_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *home;
    QPushButton *back;
    QPushButton *help;
    QPushButton *settings;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
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
"	background-color: rgb(232, 232, 194);\n"
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
        groupBox_7 = new QGroupBox(page_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));

        verticalLayout_5->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(page_3);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setMinimumSize(QSize(0, 50));
        groupBox_8->setMaximumSize(QSize(16777215, 50));
        groupBox_8->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background-color:none;\n"
"}"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_8);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_15 = new QPushButton(groupBox_8);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);
        pushButton_15->setMinimumSize(QSize(50, 30));
        pushButton_15->setMaximumSize(QSize(50, 30));
        pushButton_15->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
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
        pushButton_15->setIconSize(QSize(28, 28));

        horizontalLayout_3->addWidget(pushButton_15);

        pushButton_14 = new QPushButton(groupBox_8);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);
        pushButton_14->setMinimumSize(QSize(50, 30));
        pushButton_14->setMaximumSize(QSize(50, 30));
        pushButton_14->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
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
        pushButton_14->setIconSize(QSize(28, 28));

        horizontalLayout_3->addWidget(pushButton_14);

        all_bins = new QPushButton(groupBox_8);
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
        all_bins->setIconSize(QSize(28, 28));

        horizontalLayout_3->addWidget(all_bins);

        previous_bin = new QPushButton(groupBox_8);
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
        previous_bin->setIconSize(QSize(28, 28));

        horizontalLayout_3->addWidget(previous_bin);

        next_bin = new QPushButton(groupBox_8);
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
        next_bin->setIconSize(QSize(28, 28));

        horizontalLayout_3->addWidget(next_bin);

        clear_screen = new QPushButton(groupBox_8);
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
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/app_icons/clear.png"), QSize(), QIcon::Normal, QIcon::On);
        clear_screen->setIcon(icon5);
        clear_screen->setIconSize(QSize(28, 28));

        horizontalLayout_3->addWidget(clear_screen);

        horizontalSpacer_3 = new QSpacerItem(292, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        home_2 = new QPushButton(groupBox_8);
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
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/app_icons/home.png"), QSize(), QIcon::Normal, QIcon::On);
        home_2->setIcon(icon6);
        home_2->setIconSize(QSize(28, 28));

        horizontalLayout_3->addWidget(home_2);

        help_2 = new QPushButton(groupBox_8);
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

        settings_2 = new QPushButton(groupBox_8);
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


        verticalLayout_5->addWidget(groupBox_8);

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
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(groupBox_2);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setStyleSheet(QString::fromUtf8("QSplitter:handle\n"
"{\n"
"background-color: rgb(218, 218, 182);\n"
"\n"
"}\n"
""));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setChildrenCollapsible(false);
        groupBox_4 = new QGroupBox(splitter);
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
        groupBox_6->setMinimumSize(QSize(0, 50));
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"background-color:none;\n"
"}"));
        horizontalLayout = new QHBoxLayout(groupBox_6);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(40, 0, 20, 0);
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

        all_bins_2 = new QPushButton(groupBox_6);
        all_bins_2->setObjectName(QString::fromUtf8("all_bins_2"));
        sizePolicy.setHeightForWidth(all_bins_2->sizePolicy().hasHeightForWidth());
        all_bins_2->setSizePolicy(sizePolicy);
        all_bins_2->setMinimumSize(QSize(50, 30));
        all_bins_2->setMaximumSize(QSize(50, 30));
        all_bins_2->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
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
        all_bins_2->setIconSize(QSize(28, 28));

        horizontalLayout->addWidget(all_bins_2);

        previous_bin_2 = new QPushButton(groupBox_6);
        previous_bin_2->setObjectName(QString::fromUtf8("previous_bin_2"));
        sizePolicy.setHeightForWidth(previous_bin_2->sizePolicy().hasHeightForWidth());
        previous_bin_2->setSizePolicy(sizePolicy);
        previous_bin_2->setMinimumSize(QSize(50, 30));
        previous_bin_2->setMaximumSize(QSize(50, 30));
        previous_bin_2->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
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
        previous_bin_2->setIconSize(QSize(28, 28));

        horizontalLayout->addWidget(previous_bin_2);

        next_bin_2 = new QPushButton(groupBox_6);
        next_bin_2->setObjectName(QString::fromUtf8("next_bin_2"));
        sizePolicy.setHeightForWidth(next_bin_2->sizePolicy().hasHeightForWidth());
        next_bin_2->setSizePolicy(sizePolicy);
        next_bin_2->setMinimumSize(QSize(50, 30));
        next_bin_2->setMaximumSize(QSize(50, 30));
        next_bin_2->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
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
        next_bin_2->setIconSize(QSize(28, 28));

        horizontalLayout->addWidget(next_bin_2);

        clear_screen_2 = new QPushButton(groupBox_6);
        clear_screen_2->setObjectName(QString::fromUtf8("clear_screen_2"));
        sizePolicy.setHeightForWidth(clear_screen_2->sizePolicy().hasHeightForWidth());
        clear_screen_2->setSizePolicy(sizePolicy);
        clear_screen_2->setMinimumSize(QSize(50, 30));
        clear_screen_2->setMaximumSize(QSize(50, 30));
        clear_screen_2->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
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
        clear_screen_2->setIcon(icon5);
        clear_screen_2->setIconSize(QSize(28, 28));

        horizontalLayout->addWidget(clear_screen_2);

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
        home->setIcon(icon6);
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
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/app_icons/back.png"), QSize(), QIcon::Normal, QIcon::On);
        back->setIcon(icon7);
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

        splitter->addWidget(groupBox_4);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(70, 16777215));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"border-style:none;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(10, 20, 10, 2);
        pushButton = new QPushButton(groupBox);
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
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/app_icons/refresh.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton->setIcon(icon8);
        pushButton->setIconSize(QSize(24, 24));

        verticalLayout_2->addWidget(pushButton);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(50, 30));
        pushButton_3->setMaximumSize(QSize(50, 30));
        pushButton_3->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
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
        icon9.addFile(QString::fromUtf8(":/icons/app_icons/zoom_out.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_3->setIcon(icon9);
        pushButton_3->setIconSize(QSize(28, 28));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(50, 30));
        pushButton_2->setMaximumSize(QSize(50, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
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
        icon10.addFile(QString::fromUtf8(":/icons/app_icons/zoom_in.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_2->setIcon(icon10);
        pushButton_2->setIconSize(QSize(28, 28));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(50, 30));
        pushButton_6->setMaximumSize(QSize(50, 30));
        pushButton_6->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
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
        icon11.addFile(QString::fromUtf8(":/icons/app_icons/zoom_to_fit.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_6->setIcon(icon11);
        pushButton_6->setIconSize(QSize(28, 28));

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(50, 30));
        pushButton_5->setMaximumSize(QSize(50, 30));
        pushButton_5->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
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
        pushButton_5->setIcon(icon5);
        pushButton_5->setIconSize(QSize(28, 28));

        verticalLayout_2->addWidget(pushButton_5);

        horizontalSpacer = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(horizontalSpacer);

        splitter->addWidget(groupBox);

        gridLayout_4->addWidget(splitter, 0, 0, 1, 1);


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

        stackedWidget->setCurrentIndex(2);


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
        groupBox_7->setTitle(QString());
        groupBox_8->setTitle(QString());
        pushButton_15->setText(QString());
        pushButton_14->setText(QString());
        all_bins->setText(QString());
        previous_bin->setText(QString());
        next_bin->setText(QString());
#if QT_CONFIG(tooltip)
        clear_screen->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">clear </span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        clear_screen->setText(QString());
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
        all_bins_2->setText(QString());
        previous_bin_2->setText(QString());
        next_bin_2->setText(QString());
#if QT_CONFIG(tooltip)
        clear_screen_2->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">clear </span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        clear_screen_2->setText(QString());
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
        pushButton->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">refresh</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_3->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">zoom out</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_3->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_2->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">zoom in</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_2->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_6->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">zoom to fit</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_6->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_5->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">clear</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
