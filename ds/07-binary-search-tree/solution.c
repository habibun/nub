#include<stdio.h>

void add(); //to construct binary tree
void show(); //to display binary tree
int search(int n); //to search any value from the tree

int tree[100];
int maxIndex = 0;

int main()
{
    int choice;
    int n, res;

    printf("1.Add value in a tree \n");
    printf("2.Show all values of the tree \n");
    printf("3.Search a value from the tree \n");
    printf("==================================\n\n");

    while(1){
        printf("Enter you choice: ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            printf("Enter a number: ");
            scanf("%d", &n);
            add(n);
            break;
            case 2:
            show();
            break;
            case 3:
            printf("Searching for: ");
            scanf("%d", &n);
            res = search(n);
            if(res == -1){
                printf("Not found.\n");
            }else{
                printf("Found %d at node %d \n", n, res);
            }
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("Wrong choice \n");
        }
    }


    return 0;
}

//to construct binary tree
void add(int n)
{
    int index = 0;
    while(1){
        if(tree[index] == 0){
            tree[index] = n;
            break;
        }else if (n <= tree[index]){
            index = ((index+1) *2 ) -1;
        }else{
            index = (index + 1) *2;
        }
    }

    if(maxIndex < index){
        maxIndex = index;
    }
}

//to display all value of the tree
void show()
{
    int i;

    printf("\nShow all values of the tree \n");

    for(i = 0; i < maxIndex; i++){
        printf("%d\t", tree[i]);
    }
    printf("\n");
}

//to search any value from the tree
int search(int n)
{
    int index = 0;

    while(maxIndex >= index){
        if(tree[index] == n){
            return index;
        }
        else if(n <= tree[index]){
            index = ((index + 1) * 2) -1 ;
        }else {
            index = (index + 1)*2;
        }
    }

    return -1;
}
