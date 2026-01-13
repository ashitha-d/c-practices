#include "leap.h"

bool leap_year(int a){
    return (a % 400 == 0) ||
           (a % 4 == 0 && a % 100 != 0);
}
