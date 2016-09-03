#ifndef TESTPLAYERCHARACTER_H
#define TESTPLAYERCHARACTER_H

#include <QObject>

class TestAdventurer : public QObject
{
    Q_OBJECT
public:
    explicit TestAdventurer(QObject *parent = 0);

signals:

public slots:

private slots:
    void testGetAbility();
    void testGetClass();
    void testGetName();
    void testGetStock();
    void testSetAbility();
    void testSetClass();
    void testSetName();
    void testSetStock();
};

#endif // TESTPLAYERCHARACTER_H
