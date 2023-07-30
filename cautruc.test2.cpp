#include <stdio.h>

typedef struct {
    double re;    
    double im;   
} complex_t;


complex_t addComplex(complex_t a, complex_t b){
    complex_t c;
    
    c.re = a.re + b.re;
    c.im = a.im + b.im;
    
    return c;
}



int main(void){
    complex_t a = {1.2, 3.4};
    complex_t b = {5.6, 7.8};
    complex_t c;
    c = addComplex(a,b);
    printf("%f + %fi\n",c.re,c.im);
    
    
    return 0;
}
