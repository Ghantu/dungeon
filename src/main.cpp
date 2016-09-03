
#include "test/testexecutor.h"

#include <QString>
#include <QStringList>

int main( int argc, char *argv[] )
{
    TestExecutor testExecutor;
    int testsFailed = testExecutor.executeTests();

    if ( testsFailed > 0 )
    {
        return testsFailed;
    }

    if ( argc > 1 )
    {
        // use console interface
        QStringList arguments;
        for ( int i = 0; i < argc; ++i )
        {
            QString arg( argv[i] );
            arguments.append( arg );
        }

    }
    else
    {
        // start up GUI
    }

    return 0;
}

/*
 * Return to the View
 * Organize a Party
 * Journey Onward
 *
 * Examine the register
 * Create a character
 * Form the party
 * Disperse the party
 * Terminate a Character
 * Look at a Character
 * Main Menu
 *
 */
