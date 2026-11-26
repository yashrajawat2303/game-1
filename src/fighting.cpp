#ifndef fighting_h
#define fighting_h


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
    
int roll () = rand() %100;
int damage=attack()
    if (roll >c_rate) {
        return critical() ;
    }
     else {
        return damage;
     }



#endif