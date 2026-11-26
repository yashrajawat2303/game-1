#ifndef fighting_h
#define fighting_h

int damage;
int absorb;
int crit;


int attack ( ) {
     damage= str*0.7+dex*0.2+aur*0.4;
      return damage;
    }  

int dmgtake( ) {
     absorb = def*0.5+end*0.5;
    return absorb;
    }
int critical(int damage ) {
     crit=c_mult*damage;
    return crit; 
}
int roll () {    
int roll = rand() %100;
 damage=attack()
    if (roll >c_rate) {
        return critical(damage) ;
    }
     else {
        return damage;
     }

    }

#endif