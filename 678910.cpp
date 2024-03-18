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

//7
int itc_rev_num(long long number){
long long a;
long long k = 0;
if(number < 0){
    number = number * -1;
}
while(number > 0){
    a = number % 10;
    k = k * 10 + a;
    number = number / 10;
}
return itc_len_num(k);

}


//8
int itc_null_count(long long number){
long long a;
long long k = 0;
if(number < 0){
    number = number * -1;
}
while(number > 0){
    a = number % 10;
    if(a == 0){
        k++;
    }
    number = number /10;

}
return k;
}

//9

