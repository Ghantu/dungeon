#include "adventurer.h"

#include "characterclass.h"
#include "characterstock.h"

#include <QString>

using DungeonCrawler::Adventurer;

Adventurer::Adventurer()
{
    mName = new QString;
    mStatus = CharacterStatus::Unready;

    mStock = NULL;
    mClass = NULL;

    mAbilities[Adventurer::CharacterAbility::Might].value = ADVENTURER_MIGHT;
}

Adventurer::~Adventurer()
{
    if ( mName )
    {
        delete mName;
        mName = NULL;
    }
}

struct Adventurer::Ability Adventurer::getAbility( CharacterAbility ability ) const
{
    return mAbilities[ability];
}

CharacterClass const * Adventurer::getClass() const
{
    return mClass;
}

QString const Adventurer::getName() const
{
    return *mName;
}

CharacterStock const * Adventurer::getStock() const
{
    return mStock;
}

bool Adventurer::setAbility( CharacterAbility ability, int newValue )
{
    if ( ability == Adventurer::CharacterAbility::Might )
    {
        // Might never changes
        return false;
    }
    mAbilities[ability].value = newValue;
    mAbilities[ability].tempValue = newValue; // TODO: not true for Nature
    mAbilities[ability].passes = 0;
    mAbilities[ability].fails = 0;

    return true;
}

bool Adventurer::setClass( CharacterClass const * const newClass )
{
    if ( mStatus == CharacterStatus::Unready )
    {
        mClass = newClass;
        return true;
    }
    return false;
}

bool Adventurer::setName( const QString *newName )
{
    if ( mStatus == CharacterStatus::Unready )
    {
        *mName = *newName;
        return true;
    }
    return false;
}

bool Adventurer::setStock( CharacterStock const * const newStock )
{
    if ( mStatus == CharacterStatus::Unready )
    {
        mStock = newStock;
        return true;
    }
    return false;
}
