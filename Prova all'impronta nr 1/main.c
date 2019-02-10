//
//  main.c
//  Prova all'impronta nr 1
//
//  Created by Roberto Vecchio on 10/02/2019.
//  Copyright © 2019 Roberto Vecchio. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

int giveSecondMaxElement(int *, int);

int main(int argc, const char * argv[]) {
    
    /*inizializzo array e grandezza array*/
    int array_to_test[] = {3,7,4,2,1,3};
    int array_size = sizeof(array_to_test) / sizeof(array_to_test[0]);
    
    int second_element_greater = giveSecondMaxElement(array_to_test, array_size);
    
    printf("il secondo elemento piu' grande e': %d\n\n", second_element_greater);
    return 0;
}

int giveSecondMaxElement(int *array, int array_size){
    int i, first, second;
    
    if(array_size < 2){
        printf("Hai inserito un array non valido");
        return INT_MIN;
    }
    
    first = second = INT_MIN;
    
    for (i = 0; i < array_size; i++) {
        
        if (array[i] > first) {
            second = first;
            first = array[i];
        }else if (array[i] > second && array[i] != first){
            second = array[i];
        }
    }
    
    return second;
}
