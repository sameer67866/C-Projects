#include <stdio.h>
#include <stdlib.h>

//msameer1

typedef struct {
    char name [10];
    double weight;
    int productid;
}item;


int getitems (item *product,int variable){
    int i;

    for (i=0; i< variable;i++){

        printf("\nEnter the name of the product: ");
        scanf("%s", &(product+i)->name);

        printf("\nEnter the product ID : ");
        scanf("%d", &(product+i)->productid);
    
        printf("\nEnter the weight of the product : ");
        scanf("%lf", &(product+i)->weight);

    }
}


int printitems (item *product,int variable){
    int i;
    for (i=0; i< variable;i++){
        printf("Name: %s\t Product ID:%d\t Weight%lf\t\n", (product+i)->name, (product+i)->productid, (product+i)->weight );

    }
}


int main (void){

    item *product;
    int numitems;
    int i=0;

    printf("\nEnter number of records ");
    scanf("%d", &numitems);

    product = (item*)malloc (numitems* sizeof (item));

    getitems(product, numitems);

    printitems(product, numitems);



}