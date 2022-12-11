#include <stdio.h>
#include <stdlib.h>

void counting(unsigned int N);


int main()
{
    unsigned int N;

    do{
        printf("\nEnter N(>=1):");
        scanf("%u", &N);
    }while(N<1);
    system("cls");
    printf("_________________\nnumber|answear\t|");
    counting(N);
    printf("\n_________________");
   getch();
}

void counting(unsigned int N){

double answear;
double i;

for (i=1;i<=N;i++){;
    answear=i/2+2/i;
    printf("\n     %.0f|%.3f\t|",i,answear);
    }

}
