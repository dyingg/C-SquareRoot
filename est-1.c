#include<stdio.h>


//Easy  to compute root of small integers
int naiveRoot(int  c);

int main() {

    int sqrt_25 = naiveRoot(912025);
}

int naiveRoot(int c) {
    int upperLimit  = c /2;

    for(int i = 0; i < upperLimit; i++) {
        if(i * i == c)
            return i;

    }
    return -1;
}


//Time 0.044s O(n)
