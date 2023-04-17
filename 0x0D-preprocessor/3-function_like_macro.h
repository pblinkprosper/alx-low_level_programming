#ifndef ABS
#define ABS
#define ABS(x) (((x) ^ (x >> 31)) - (x >> 31))
#endif
