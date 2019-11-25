#include <stdio.h>

float babRoot(int n);

int main(){
    float r25 = babRoot(3);
    printf("%f", r25);
}

float babRoot(int n) {
    float root = n/2;
    while( root * root != n && (root * root > ((float)n + 0.5) || root * root < ((float)n - 0.5)) ) {
        root = ((n/root) + root)/2;
    }
    return root;
}
//Time 0.41s more accurate runtime  (?)
