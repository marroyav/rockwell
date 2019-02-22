/********************************************************************************
** Form generated from reading UI file 'colorwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLORWIDGET_H
#define UI_COLORWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "colorlabel.h"

QT_BEGIN_NAMESPACE

class Ui_ColorWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    ColorLabel *backLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    ColorLabel *textLabel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    ColorLabel *gridLabel;
    QGroupBox *groupBox;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *apply;

    void setupUi(QWidget *ColorWidget)
    {
        if (ColorWidget->objectName().isEmpty())
            ColorWidget->setObjectName(QString::fromUtf8("ColorWidget"));
        ColorWidget->resize(381, 122);
        gridLayout = new QGridLayout(ColorWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ColorWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        backLabel = new ColorLabel(ColorWidget);
        backLabel->setObjectName(QString::fromUtf8("backLabel"));
        backLabel->setMinimumSize(QSize(30, 30));

        horizontalLayout->addWidget(backLabel);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(ColorWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        textLabel = new ColorLabel(ColorWidget);
        textLabel->setObjectName(QString::fromUtf8("textLabel"));
        textLabel->setMinimumSize(QSize(30, 30));

        horizontalLayout_2->addWidget(textLabel);


        gridLayout->addLayout(horizontalLayout_2, 0, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(ColorWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        gridLabel = new ColorLabel(ColorWidget);
        gridLabel->setObjectName(QString::fromUtf8("gridLabel"));

        horizontalLayout_3->addWidget(gridLabel);


        gridLayout->addLayout(horizontalLayout_3, 0, 3, 1, 1);

        groupBox = new QGroupBox(ColorWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));

        gridLayout->addWidget(groupBox, 1, 0, 2, 4);

        horizontalSpacer_2 = new QSpacerItem(180, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 1, 2, 1);

        apply = new QPushButton(ColorWidget);
        apply->setObjectName(QString::fromUtf8("apply"));

        gridLayout->addWidget(apply, 3, 2, 1, 1);


        retranslateUi(ColorWidget);

        QMetaObject::connectSlotsByName(ColorWidget);
    } // setupUi

    void retranslateUi(QWidget *ColorWidget)
    {
        ColorWidget->setWindowTitle(QApplication::translate("ColorWidget", "ColorWidget", nullptr));
        label->setText(QApplication::translate("ColorWidget", "Background Color", nullptr));
        backLabel->setText(QApplication::translate("ColorWidget", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("ColorWidget", "Text Color", nullptr));
        textLabel->setText(QApplication::translate("ColorWidget", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("ColorWidget", "Grid Color", nullptr));
        gridLabel->setText(QApplication::translate("ColorWidget", "gridLabel", nullptr));
        groupBox->setTitle(QApplication::translate("ColorWidget", "Select Colors", nullptr));
        apply->setText(QApplication::translate("ColorWidget", "Apply ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColorWidget: public Ui_ColorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLORWIDGET_H
