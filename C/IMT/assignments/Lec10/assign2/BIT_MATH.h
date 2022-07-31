#ifndef _BIT_MATH_H_
#define _BIT_MATH_H_
#define SET_BIT(register,BitNo) (register |= 1<<BitNo)
#define CLR_BIT(register,BitNo) (register &= ~(1<<BitNo))

//two methods of get bit
#define GET_BIT(register,BitNo) (register != (register & ~(1<<BitNo)))
//#define GET_BIT(register,BitNo) ((register >>BitNo) & 1)
#endif