#ifndef fighting_h
#define fighting_h


attack (int damage ) {
      damage= str*0.7+dex*0.2+aur*0.4;
      return damage;
    }  

dmgtake(int absorb ) {
    absorb = def*0.5+end*0.5;
    return absorb;
    }
critical(int crit ) {
    crit=c_mult*damage;
    return crit; 
}
    
int roll = rand() %100 {
    if (roll >c_rate) {
        return critical;
    }
     else {
        return damage;
     }
}


#endif