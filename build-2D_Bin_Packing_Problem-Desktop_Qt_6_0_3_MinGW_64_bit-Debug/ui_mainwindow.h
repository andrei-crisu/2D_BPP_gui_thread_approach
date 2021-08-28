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
    QWidget *page_2;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 500);
        MainWindow->setMinimumSize(QSize(700, 500));
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/app_icons/bpp.png"), QSize(), QIcon::Normal, QIcon::On);
        bpp_view_button->setIcon(icon);
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/app_icons/settings.png"), QSize(), QIcon::Normal, QIcon::On);
        settings_button->setIcon(icon1);
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/app_icons/help.png"), QSize(), QIcon::Normal, QIcon::On);
        help_button->setIcon(icon2);
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
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/app_icons/exit.png"), QSize(), QIcon::Normal, QIcon::On);
        exit_button->setIcon(icon3);
        exit_button->setIconSize(QSize(130, 130));

        horizontalLayout_2->addWidget(exit_button);


        gridLayout_2->addWidget(groupBox_3, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout = new QGridLayout(page_2);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(groupBox_2);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 246, 249);\n"
""));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        horizontalLayout->addWidget(graphicsView);

        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox\n"
"{\n"
"border-style:none;\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 0, 2, 2);
        horizontalSpacer = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(75, 50));
        pushButton->setMaximumSize(QSize(75, 50));
        pushButton->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	  \n"
"	  background-color: rgba(44, 54, 50, 40);\n"
"	  border-color: rgb(44, 54, 50);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"	  color: rgb(44, 54, 50);\n"
"      font:  14px; \n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	  \n"
"	 \n"
"	 \n"
"	 background-color: rgba(137, 149, 147,255);\n"
"	  border-color: rgba(44, 54, 50,124);\n"
"      border-style:solid;\n"
"  }"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMinimumSize(QSize(75, 50));
        pushButton_3->setMaximumSize(QSize(75, 50));
        pushButton_3->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	  \n"
"	  background-color: rgba(44, 54, 50, 40);\n"
"	  border-color: rgb(44, 54, 50);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"	  color: rgb(44, 54, 50);\n"
"      font:  14px; \n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	  \n"
"	 \n"
"	 \n"
"	 background-color: rgba(137, 149, 147,255);\n"
"	  border-color: rgba(44, 54, 50,124);\n"
"      border-style:solid;\n"
"  }"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMinimumSize(QSize(75, 50));
        pushButton_2->setMaximumSize(QSize(75, 50));
        pushButton_2->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	  \n"
"	  background-color: rgba(44, 54, 50, 40);\n"
"	  border-color: rgb(44, 54, 50);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"	  color: rgb(44, 54, 50);\n"
"      font:  14px; \n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	  \n"
"	 \n"
"	 \n"
"	 background-color: rgba(137, 149, 147,255);\n"
"	  border-color: rgba(44, 54, 50,124);\n"
"      border-style:solid;\n"
"  }"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(75, 50));
        pushButton_6->setMaximumSize(QSize(75, 50));
        pushButton_6->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	  \n"
"	  background-color: rgba(44, 54, 50, 40);\n"
"	  border-color: rgb(44, 54, 50);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"	  color: rgb(44, 54, 50);\n"
"      font:  14px; \n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	  \n"
"	 \n"
"	 \n"
"	 background-color: rgba(137, 149, 147,255);\n"
"	  border-color: rgba(44, 54, 50,124);\n"
"      border-style:solid;\n"
"  }"));

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMinimumSize(QSize(75, 50));
        pushButton_5->setMaximumSize(QSize(75, 50));
        pushButton_5->setStyleSheet(QString::fromUtf8("  QPushButton {\n"
"	  \n"
"	  background-color: rgba(44, 54, 50, 40);\n"
"	  border-color: rgb(44, 54, 50);\n"
"      border-style:solid;\n"
"      border-width:1px;\n"
"	  color: rgb(44, 54, 50);\n"
"      font:  14px; \n"
"  }\n"
"  QPushButton:hover:!pressed {\n"
"	  \n"
"	 \n"
"	 \n"
"	 background-color: rgba(137, 149, 147,255);\n"
"	  border-color: rgba(44, 54, 50,124);\n"
"      border-style:solid;\n"
"  }"));

        verticalLayout_2->addWidget(pushButton_5);


        horizontalLayout->addWidget(groupBox);


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

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox_3->setTitle(QString());
        bpp_view_button->setText(QString());
        settings_button->setText(QString());
        help_button->setText(QString());
        exit_button->setText(QString());
        groupBox_2->setTitle(QString());
        groupBox->setTitle(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Print", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Zoom out", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Zoom in", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Zoom to fit", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
