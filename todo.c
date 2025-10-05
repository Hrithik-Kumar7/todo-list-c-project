#include <stdio.h>

int main(){
    printf("===TODO List===\n");
    printf("1. Add Task\n");
    printf("2. View Task\n");
    printf("3. Exit\n");
    printf("Choose an Option: ");

    int choice ;
    scanf("%d",&choice);
    printf("You chose : %d",choice);

    return 0;

}