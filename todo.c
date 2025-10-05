#include <stdio.h>
#define MAX_TAKS 10

int main(){
    char tasks[MAX_TAKS][100];
    int taskcount = 0;
    int choice ;

    do {
        printf("===TODO List===\n");
        printf("1. Add Task\n");
        printf("2. View Task\n");
        printf("3. Exit\n");
        printf("Choose an Option: ");
        scanf("%d",&choice);

        switch (choice){
        case 1:
            if(taskcount < MAX_TAKS){
                printf("Enter Task: ");
                scanf(" %[^\n]",tasks[taskcount]);
                taskcount++;
                printf("Task added Successfully!\n");
            }else{
                printf("Task list is full!\n");
            }
            break;
        case 2:
            if(taskcount == 0){
                printf("No Tasks Availabe!\n");
            }else{
                printf("\n=== Your Tasks ===\n");
                for(int i=0; i<taskcount; i++){
                    printf("%d. %s\n",i+1, tasks[i]);
                }
            }
            break;
        case 3:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid Choice!\n");
        }
    } while(choice != 3);
    
    

    return 0;

}