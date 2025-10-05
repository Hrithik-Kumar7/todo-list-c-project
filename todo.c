#include <stdio.h>
#include <string.h>

#define MAX_TAKS 10

int main(){

    printf("Welcome to My Todo List\n");

    char tasks[MAX_TAKS][100];
    int completed[MAX_TAKS] = {0};
    int taskcount = 0;
    int choice ;

    do {
        printf("===TODO List===\n");
        printf("1. Add Task\n");
        printf("2. View Task\n");
        printf("3. Mark Task Complete\n");
        printf("4. Exit\n");
        printf("Choose an Option: ");
        scanf("%d",&choice);

        switch (choice){
        case 1:
            if(taskcount < MAX_TAKS){
                printf("Enter Task: ");
                scanf(" %[^\n]",tasks[taskcount]);
                completed[taskcount] = 0;
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
                    if(completed[i]){
                        printf("%d. ✓ %s\n",i+1, tasks[i]);
                    }else{
                        printf("%d. □ %s\n", i+1, tasks[i]);
                    }
                    
                }
            }
            break;
        case 3:
            if(taskcount == 0){
                printf("No task to complete!\n");
            }else{
                int tasknum;
                printf("Enter task number to mark complete: ");
                scanf("%d",&tasknum);

                if(tasknum >= 1 && tasknum <= taskcount){
                    completed[tasknum-1] = 1;
                    printf("Task %d marked complete! ✓\n",tasknum);
                }else{
                    printf("Invalid task number!\n");
                }
            }
            break;
        case 4:
            printf("Goodbye!\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }
    } while(choice != 4);
    
    

    return 0;

}