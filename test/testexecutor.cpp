#include "testexecutor.h"

#include "model/testcharacterclass.h"
#include "model/testcharacterstock.h"
#include "model/testadventurer.h"

#include <QtTest/QtTest>

TestExecutor::TestExecutor()
{

}

int TestExecutor::executeTests() const
{
    int failures = 0;

    TestAdventurer testPlayerCharacter;
    failures += QTest::qExec( &testPlayerCharacter );

    TestCharacterClass testCharacterClass;
    failures += QTest::qExec( &testCharacterClass );

    TestCharacterStock testCharacterStock;
    failures += QTest::qExec( &testCharacterStock );

    return failures;
}
