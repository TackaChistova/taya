#include <iostream>
#include "middle.h"
using namespace std;


//1
void itc_num_print(int number){
cout << number;
}


//2
int itc_len_num(long long number){
long long a = 0;
while(number != 0){
    a++;
    number = number / 10;
}
return a;
}

//3
int itc_sum_num(long long number){
long long a = 0;
long long b;
while(number != 0){
    b = number % 10;
    a = a + b;
    number = number / 10;
}
if(a < 0){
a = a * -1;
}
return a;
}


//4
long long itc_multi_num(long long number){
long long a = 1;
long long b;
while(number != 0){
    b = number % 10;
    a = a * b;
    number = number / 10;
}
if(a < 0){
a = a * -1;
}
return a;
}



//5
int itc_max_num(long long number){
int maxi = 0;
int a;
if(number < 0){
    number = number * -1;
}
while(number != 0){
    a = number % 10;
    if(maxi < a){
        maxi = a;
    }
    number = number / 10;
}

return maxi;
}

