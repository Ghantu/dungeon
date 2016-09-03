#include "testadventurer.h"

#include "src/model/adventurer.h"
#include "src/model/characterclass.h"
#include "src/model/characterstock.h"

#include <QtTest/QtTest>

TestAdventurer::TestAdventurer(QObject *parent) : QObject(parent)
{
}

void TestAdventurer::testGetAbility()
{

}

void TestAdventurer::testGetClass()
{
}

void TestAdventurer::testGetName()
{
    DungeonCrawler::Adventurer p;
    QString charName = p.getName();
    QString testData = "";
    QCOMPARE( charName, testData );
}

void TestAdventurer::testGetStock()
{
}

void TestAdventurer::testSetAbility()
{
    DungeonCrawler::Adventurer p;

    int willValue = 4;
    int mightValue = 3;

    p.setAbility( DungeonCrawler::Adventurer::CharacterAbility::Will, willValue );
    DungeonCrawler::Adventurer::Ability will = p.getAbility( DungeonCrawler::Adventurer::CharacterAbility::Will );
    QCOMPARE( willValue, will.value );

    // test that Might isn't allowed to be changed
    p.setAbility( DungeonCrawler::Adventurer::CharacterAbility::Might, willValue );
    DungeonCrawler::Adventurer::Ability might = p.getAbility( DungeonCrawler::Adventurer::CharacterAbility::Might );
    QCOMPARE( mightValue, might.value );

}

void TestAdventurer::testSetClass()
{
    DungeonCrawler::Adventurer p;
    CharacterClass c;

    p.setClass( &c );

    const CharacterClass* returned = p.getClass();
    QCOMPARE( &c, returned );
}

void TestAdventurer::testSetName()
{
    DungeonCrawler::Adventurer p;
    QString blankName( "" );
    p.setName( &blankName );
    QCOMPARE( p.getName(), blankName );

    QString charName( "Karolina" );
    p.setName( &charName );
    QCOMPARE( p.getName(), charName );

    p.setName( &blankName );
    QCOMPARE( p.getName(), blankName );

    // also test that name can't be changed once adventurer is "ready"
}

void TestAdventurer::testSetStock()
{
    DungeonCrawler::Adventurer p;
    CharacterStock s;

    p.setStock( &s );

    const CharacterStock* returned = p.getStock();
    QCOMPARE( &s, returned );
}
