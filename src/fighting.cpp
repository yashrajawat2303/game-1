#ifndef fighting_h
#define fighting_h

int damage= str*0.7+dex*0.2+aur*0.4;
int absorb = def*0.5+end*0.5;
int crit =c_mult*damage;


int attack ( ) {
      return damage;
    }  

int dmgtake( ) {
    return absorb;
    }
int critical(int damage ) {
    return crit; 
}
int roll () {    
int roll = rand() %100;
 damage=attack();
    if (roll >c_rate) {
        return critical(damage) ;
    }
     else {
        return damage;
     }

    }
int block (int absorb ) {
    absorb = absorb*2.5;
    return absorb;
}    

#endif