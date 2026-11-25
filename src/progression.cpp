#ifndef PROGRESSION_H
#define PROGRESSION_H

class Progression
{
public:

    // XP
    void gain_xp(int &xp, int &xp_required, int amount);

    // Leveling and stat growth
    void level_up(
        int &level,
        int &str,
        int &agl,
        int &dex,
        int &aur,
        int &hp,
        int &mp,
        int &def,
        int &end
    );

  
};

#endif