/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "imagelabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLoad;
    QAction *actionImage;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *tab_2;
    QSlider *horizontalSlider_4;
    QSlider *horizontalSlider_5;
    QSlider *horizontalSlider_6;
    QLabel *label_7;
    QPushButton *pushButton_5;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label_6;
    QWidget *tab_3;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_6;
    QLabel *label_8;
    QLabel *label_12;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLabel *label_9;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QLabel *label_13;
    QLabel *label_11;
    ImageLabel *label_10;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1119, 695);
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        actionImage = new QAction(MainWindow);
        actionImage->setObjectName(QString::fromUtf8("actionImage"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(740, 20, 321, 421));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideLeft);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 200, 111, 31));
        label_2->setSizeIncrement(QSize(5, 5));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 230, 111, 31));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 260, 101, 31));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 210, 81, 20));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 240, 81, 20));
        lineEdit_3 = new QLineEdit(tab);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(180, 270, 81, 20));
        lineEdit_4 = new QLineEdit(tab);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(180, 310, 81, 20));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 310, 161, 21));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 291, 101));
        label->setFrameShadow(QFrame::Raised);
        label->setScaledContents(true);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 360, 41, 28));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalSlider_4 = new QSlider(tab_2);
        horizontalSlider_4->setObjectName(QString::fromUtf8("horizontalSlider_4"));
        horizontalSlider_4->setGeometry(QRect(70, 220, 160, 22));
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        horizontalSlider_5 = new QSlider(tab_2);
        horizontalSlider_5->setObjectName(QString::fromUtf8("horizontalSlider_5"));
        horizontalSlider_5->setGeometry(QRect(70, 270, 160, 22));
        horizontalSlider_5->setOrientation(Qt::Horizontal);
        horizontalSlider_6 = new QSlider(tab_2);
        horizontalSlider_6->setObjectName(QString::fromUtf8("horizontalSlider_6"));
        horizontalSlider_6->setGeometry(QRect(70, 320, 160, 22));
        horizontalSlider_6->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(80, 180, 161, 21));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(250, 360, 41, 28));
        checkBox = new QCheckBox(tab_2);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(50, 80, 101, 20));
        checkBox_2 = new QCheckBox(tab_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(170, 80, 101, 21));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 20, 211, 41));
        label_6->setTextFormat(Qt::RichText);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 60, 91, 31));
        lineEdit_5 = new QLineEdit(tab_3);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(190, 209, 71, 31));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(120, 360, 91, 31));
        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 160, 311, 241));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(110, 130, 82, 31));
        radioButton->setChecked(true);
        radioButton->setAutoExclusive(false);
        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(110, 170, 95, 20));
        radioButton_4->setCheckable(true);
        radioButton_4->setChecked(true);
        radioButton_4->setAutoExclusive(false);
        radioButton_5 = new QRadioButton(groupBox);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(170, 170, 95, 20));
        radioButton_5->setAutoExclusive(false);
        radioButton_6 = new QRadioButton(groupBox);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(220, 170, 95, 20));
        radioButton_6->setAutoExclusive(false);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 140, 81, 16));
        label_8->setTextFormat(Qt::RichText);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 170, 81, 16));
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(170, 130, 82, 31));
        radioButton_2->setCheckable(true);
        radioButton_2->setChecked(false);
        radioButton_2->setAutoExclusive(false);
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(220, 130, 61, 31));
        radioButton_3->setChecked(false);
        radioButton_3->setAutoExclusive(false);
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(50, 50, 121, 31));
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(110, 100, 81, 20));
        checkBox_4 = new QCheckBox(groupBox);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(190, 100, 81, 20));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(10, 100, 81, 16));
        tabWidget->addTab(tab_3, QString());
        groupBox->raise();
        pushButton_2->raise();
        lineEdit_5->raise();
        pushButton_3->raise();
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(740, 460, 321, 181));
        label_11->setFrameShape(QFrame::StyledPanel);
        label_11->setFrameShadow(QFrame::Raised);
        label_10 = new ImageLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 40, 671, 601));
        label_10->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        label_11->raise();
        label_10->raise();
        tabWidget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1119, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(tabWidget, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, horizontalSlider_4);
        QWidget::setTabOrder(horizontalSlider_4, horizontalSlider_5);
        QWidget::setTabOrder(horizontalSlider_5, horizontalSlider_6);
        QWidget::setTabOrder(horizontalSlider_6, pushButton_2);
        QWidget::setTabOrder(pushButton_2, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, radioButton);
        QWidget::setTabOrder(radioButton, radioButton_2);
        QWidget::setTabOrder(radioButton_2, pushButton_3);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionLoad);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load Image", nullptr));
#if QT_CONFIG(shortcut)
        actionLoad->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionImage->setText(QCoreApplication::translate("MainWindow", "Image", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Origin (x,y)</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">X-axis (x,y)</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Y-axis (x,y)</span></p></body></html>", nullptr));
        lineEdit->setText(QString());
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Number of Curves</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><br/></p><p><span style=\" font-size:12pt; font-weight:600;\">Chose start and end points</span></p><p><br/></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Stage 1", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Tolerance bar</span></p></body></html>", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Single-Color", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Multi-Color", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">Choose Graph Type</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Stage 2", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Digitize", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Export", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Export File", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "IV", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "COS", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainWindow", "CIS", nullptr));
        radioButton_6->setText(QCoreApplication::translate("MainWindow", "CRS", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "File Format :", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Curve Type :", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "CV", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "CSV", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Sweep Value</span></p></body></html>", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "Append", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "Overwrite", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Whether to ? :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Stage 3", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "zoom window", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Graph", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
