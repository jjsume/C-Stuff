#include <stdio.h>

//Declaring function(s)
int kertoma(int x);

int kertoma(int x) {
    if (x<=0) {
    return 1;
    }
    return (x*kertoma(x-1));
}
//Main Method
int main(int argc, char *argv[]) {
    if (argc <=1) {
        printf("Syötä parametrina luku, jonka kertoman tuloksen haluat selvittää!");
    }
    else
    {
        int tulos;
        int input = atoi(argv[1]);
        tulos = kertoma(input);
        printf("%d",tulos);
    }
}
