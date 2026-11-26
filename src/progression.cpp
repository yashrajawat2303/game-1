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
     
     // for random values 
     int random (int min,int max ) {
    return rand() % ( max - min + 1 ) + min; 
    }
    // xp gain
    void experience (int gained) {
        xp+=gained;
     
        // level up stat gain
    }
     void level_up ( ) {
            level++;
            int str_gain=random(3,9);
            int agl_gain=random(3,9);
            int dex_gain=random(2,7);
            int aur_gain=random(1,5);
            int hp_gain=random(20,100);
            int mp_gain=random(5,30);
            int def_gain=random(3,9);
            int end_gain=random(2,7)
            
            str+=str_gain;
            agl+=agl_gain;
            dex+=dex_gain;
            aur+=aur_gain;
            hp+=hp_gain;
            mp+=mp_gain;
            def+=def_gain;
            end+=end_gain;
        }          

     while (xp>=xprequired) {
        xp-=xprequired;
        xprequired=xprequired*1.5; 
        level_up ()




 };

#endif