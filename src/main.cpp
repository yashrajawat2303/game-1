#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <ostream>

using namespace std ;

class character {
    public:

    string name;
    int level;
    int health;
    int stamina;
    int energy;
    int world_power;
    int Malice;
    int aura;
    string trait;
    string ability;
    string Synchronize;
    int xp;
    int str;
    int agl;
    int dex;
    int def;
    int end;
    int aur;
    int hp;
    int mp;
    int spd;
    
    if (health>hp) {
        health=hp;
    }

    if (health < 0 ){
        cout << game over nigga << endl
    }

    int random (int min,int max ) {
    return rand() % ( max - min + 1 ) + min; 
    }
    void experience (int gained) {
        xp+=gained;
        
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

    attack (int damage ) {
      damage= str*0.7+dex*0.2+aur*0.4;
      return damage;
    }  
        
    dmgtake(int absorb ) {
    absorb = def*0.5+end*0.5;
    return absorb;
    }
    
       


    }
}

