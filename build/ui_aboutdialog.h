/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *versionLabel;
    QSpacerItem *horizontalSpacer;
    QLabel *copyrightLabel;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(593, 319);
        horizontalLayout_2 = new QHBoxLayout(AboutDialog);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(AboutDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/images/about")));

        horizontalLayout_2->addWidget(label_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(AboutDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setCursor(QCursor(Qt::IBeamCursor));
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label);

        versionLabel = new QLabel(AboutDialog);
        versionLabel->setObjectName(QStringLiteral("versionLabel"));
        versionLabel->setCursor(QCursor(Qt::IBeamCursor));
        versionLabel->setText(QStringLiteral("1.0.2"));
        versionLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(versionLabel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        copyrightLabel = new QLabel(AboutDialog);
        copyrightLabel->setObjectName(QStringLiteral("copyrightLabel"));
        copyrightLabel->setCursor(QCursor(Qt::IBeamCursor));
        copyrightLabel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(copyrightLabel);

        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setCursor(QCursor(Qt::IBeamCursor));
        label_2->setTextFormat(Qt::RichText);
        label_2->setWordWrap(true);
        label_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        horizontalLayout_2->addLayout(verticalLayout_2);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About appcoin", 0));
        label->setText(QApplication::translate("AboutDialog", "<html><head/><body><p><span style=\" font-weight:600;\">appcoin</span> version</p></body></html>", 0));
        copyrightLabel->setText(QApplication::translate("AboutDialog", "Copyright \302\251 2014-2015 The SDC developers", 0));
        label_2->setText(QApplication::translate("AboutDialog", "appcoin\345\261\236\344\272\216\345\260\235\350\257\225\346\200\247\350\231\232\346\213\237\345\270\201\357\274\214\344\276\235\346\215\256\347\233\270\345\205\263\346\263\225\345\276\213\350\247\204\345\256\232\345\261\236\344\272\216\350\231\232\346\213\237\345\225\206\345\223\201\357\274\214\344\273\205\351\231\220\344\272\216\346\224\266\350\227\217\343\200\202\346\224\266\350\227\217\350\231\232\346\213\237\345\225\206\345\223\201\346\234\254\350\272\253\345\255\230\345\234\250\346\236\201\345\244\247\347\232\204\351\243\216\351\231\251\357\274\214\346\224\266\350\227\217\347\210\261\345\245\275\350\200\205\345\272\224\344\276\235\346\215\256\350\207\252\350\272\253\346\211\277\345\217\227\350\203\275\345\212\233\357\274\214\345\271\266\344\276\235\346\215\256\345\270\202\345\234\272\350\257\204\344\274\260\346\224\266\350\227\217\344\270\216\345\220\246\357\274\214appcoin\345\233\242\351\230\237\344\273\205\344\273\205\346\230\257appcoin\347\232\204\351\222\261\345\214\205\347\274\226\350\257\221\344\273"
                        "\245\345\217\212\345\234\250\344\270\200\345\256\232\346\227\266\351\227\264\346\256\265\347\232\204\347\273\264\346\212\244\350\201\214\350\264\243\357\274\214\344\270\215\346\211\277\346\213\205\346\224\266\350\227\217\350\200\205\346\224\266\350\227\217\350\277\207\347\250\213\345\222\214\346\265\201\351\200\232\350\277\207\347\250\213\344\270\255\347\232\204\344\273\273\344\275\225\345\275\242\345\274\217\347\232\204\346\215\237\345\244\261\350\264\243\344\273\273\343\200\202\350\257\267\346\224\266\350\227\217\350\200\205\345\212\241\345\277\205\350\256\244\345\217\257\346\255\244\350\247\204\345\210\231\346\226\271\345\217\257\345\217\202\344\270\216\343\200\202\346\224\266\350\227\217\350\200\205\344\270\200\346\227\246\345\217\202\344\270\216\357\274\214\345\215\263\350\256\244\345\217\257\346\255\244\350\247\204\345\210\231\343\200\202", 0));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
