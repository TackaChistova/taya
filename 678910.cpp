#include <iostream>
#include "middle.h"
using namespace std;

//6
int itc_min_num(long long number){
int mini = 10;
int a;
if(number < 0){
    number = number * -1;
}
while(number != 0){
    a = number % 10;
    if(mini > a){
        mini = a;
    }
    number = number / 10;
}

return mini;
}