#ifndef PROGRESSION_H
#define PROGRESSION_H

class Progression
{
public:

     // visible values
        int &health;
        int &stamina;
        int &energy;
        int &world_power;
        int &Malice;
        int &aura;
        string &trait;
        string &ability;
        string &Synchronize;

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
        int &end,
        int &spd,
        int &c_rate,
        int &c_mult,
        
    
    
    );
    // stamina regen
    void stamina_regen(int &stamina, int max_stamina, int amount);

    // WP ( world power)
    void gain_wp(int &wp, int amount);
    
    // currency 
     void money_gain (int &money, int max_money, int amount);
     void special_coin_gain ( int &special_coin, int max_special_coin, int amount);
     void good_karma_gain ( int &good_karma, int amount);
     void bad_karma_gain (int &bad_karma, int amount);
 };

#endif