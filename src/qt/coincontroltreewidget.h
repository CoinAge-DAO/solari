// Copyright (c) 2011-2013 The Bitcoin Core Developers
// Copyright (c) 2015 Solarminx
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SOLARI_QT_COINCONTROLTREEWIDGET_H
#define SOLARI_QT_COINCONTROLTREEWIDGET_H

#include <QKeyEvent>
#include <QTreeWidget>

class CoinControlTreeWidget : public QTreeWidget
{
    Q_OBJECT

public:
    explicit CoinControlTreeWidget(QWidget *parent = 0);

protected:
    virtual void keyPressEvent(QKeyEvent *event);
};

#endif // SOLARI_QT_COINCONTROLTREEWIDGET_H
