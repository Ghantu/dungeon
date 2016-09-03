#ifndef PLAYERCHARACTER_H
#define PLAYERCHARACTER_H

class QString;
class CharacterStock;
class CharacterClass;

namespace DungeonCrawler {


class Adventurer
{
public:
    Adventurer();
    virtual ~Adventurer();

    const int ADVENTURER_MIGHT = 3;

    enum CharacterStatus { Unready, Ready, Dead };
    enum CharacterAbility { Will, Health, Nature, Resources, Circles, Might, NumAbilities };
    struct Ability {
        int value;
        int tempValue;
        int passes;
        int fails;
    };

    struct Ability getAbility( CharacterAbility ability ) const;
    CharacterClass const * getClass() const;
    QString const getName() const;
    CharacterStock const * getStock() const;

    bool setAbility( CharacterAbility ability, int newValue );
    bool setClass( CharacterClass const * const newClass );
    bool setName( QString const * const newName );
    bool setStock( CharacterStock const * const newStock );

private:
    QString* mName;
    CharacterStock const* mStock;
    CharacterClass const* mClass;

    struct Ability mAbilities[CharacterAbility::NumAbilities];

    CharacterStatus mStatus;
};

}

#endif // PLAYERCHARACTER_H
