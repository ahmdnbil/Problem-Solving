// togglining, getting, setting, and clearing bit 
//also you could convert number form positive to negative without using multiplication by-1 :)

#ifndef _BIT_MANIPULATION_H_
#define _BIT_MANIPULATION_H_

#define GET_BIT(x,No)  (x & ~(1 <<No)) == x ? 0:1 

#define TOGGLE_BIT(x,No)  if( GET_BIT(x,No) ) x&=(~(1<<No)); \
                            else x|=(1<<No);  

#define INVERT_NUMBER(x) if(x>0) x=(~x)+1; \
                        else {x-=1; x=~x;}

#define SET_BIT(x,No) x|=(1<<No)
#define CLR_BIT(x,No) x&=~(1<<No)

#define CONC_BIT(b7,b6,b5,b4,b3,b2,b1,b0) Conc_help(b7,b6,b5,b4,b3,b2,b1,b0)
#define Conc_help(b7,b6,b5,b4,b3,b2,b1,b0) 0b##b7##b6##b5##b4##b3##b2##b1##b0

#endif