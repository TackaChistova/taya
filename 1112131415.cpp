#include <iostream>
#include "middle.h"
using namespace std;

//11
int itc_second_max_num(long long number){
long long maxi = -10;
long long maxi2 = -10;
long long n = 0;
if(number < 0){
    number = number * -1;
}
if(number / 10 == 0){
    return -1;
}
else{
    while(number != 0){
        if(number % 10 >= maxi){
           maxi2 = maxi;
           maxi = number % 10;
        }
        if(number % 10 < maxi && number % 10 > maxi2){
            maxi2 = number % 10;
        }
        number = number / 10;
}
}
return maxi2;
}


//12
int itc_second_simple_max_num(long long number){
long long maxi = -10;
long long maxi2 = -10;
long long n = 0;
if(number / 10 == 0){
        return -1;
}
else{
    while(number != 0){
        if(number % 10 >= maxi){
           maxi2 = maxi;
           maxi = number % 10;
        }
        if(number % 10 < maxi && number % 10 > maxi2){
            maxi2 = number % 10;
        }
        number = number / 10;
}
if(maxi == maxi2){
    return -1;
}
}
return maxi2;
}
