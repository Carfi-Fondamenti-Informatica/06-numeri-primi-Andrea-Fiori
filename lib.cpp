#include <iostream>
#include "lib.h"
using namespace std;
bool scm(int a, int b) {
    a=abs(a);
    b=abs(b);
    if (a==0 || a==1)
        return false;
    int rest = a % --b;
    if (rest==0 && b>1){
        return false;
    }else if(b!=1)
        return scm(a,b);
    else
        return true;
    }
