#include <iostream>
#include "middle.h"
using namespace std;

//6
int itc_min_num(long long number){
int mini = 10;
int a;
if(number == 0){
    return 0;
}
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
bool itc_mirror_num(long long number){
int x = 0;
long long ch = 0;
long long n = number;
while(number != 0){
    x = number % 10;
    ch = ch * 10 + x;
    number = number / 10;
}
if(ch == n){
    return 1;
}
else{
    return 0;
}
}



//10
int itc_mirror_count(long long number){
long long a = 0;
long long n = 0;
if(number > 0){
    while(a != number){
        if(itc_mirror_num(a) == 1){
            n++;
        }
        a++;
    }
}
if(number < 0){
    while(a != number){
        if(itc_mirror_num(a) == 1){
            n++;
        }
        a--;
    }
}
return n;
}
