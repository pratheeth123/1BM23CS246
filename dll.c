#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    struct node *next;
    int data;
};
struct node *start = NULL;
struct node *create_ll(struct node *start) {
    struct node *new_node, *ptr;
    int num;
    printf("Enter the data:\n");
    scanf("%d", &num);

    while (num != -1) {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = num;
        new_node->next = NULL;

        if (start == NULL) {
            new_node->prev = NULL;
            start = new_node;
        } else {
            ptr = start;
            while (ptr->next != NULL) {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node->prev = ptr;
        }

        printf("Enter the data (or -1 to end):\n");
        scanf("%d", &num);
    }
    return start;
};
struct node *insert_before(struct node *start) {
    struct node *ptr, *newnode;
    int num, val;
    printf("\nEnter the data to insert:\n");
    scanf("%d", &num);
    printf("\nEnter the value before which the data has to be inserted:\n");
    scanf("%d", &val);

    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = num;

    ptr = start;
    while (ptr != NULL && ptr->data != val) {
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Value %d not found in the list.\n", val);
        return start;
    }

    newnode->next = ptr;
    newnode->prev = ptr->prev;

    if (ptr->prev != NULL) {
        ptr->prev->next = newnode;
    } else {
        start = newnode;
    }

    ptr->prev = newnode;
    return start;
};
void display(struct node *start) {
    struct node *ptr = start;
    if (ptr == NULL) {
        printf("The list is empty.\n");
        return;
    }
    while (ptr != NULL) {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}
struct node *delete_node(struct node *start) {
    struct node *ptr, *temp;
    int val;
    printf("Enter the value to be deleted:\n");
    scanf("%d", &val);

    if (start == NULL) {
        printf("The list is empty.\n");
        return start;
    }

    ptr = start;
    while (ptr != NULL && ptr->data != val) {
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        printf("Value %d not found in the list.\n", val);
        return start;
    }

    if (ptr->prev != NULL) {
        ptr->prev->next = ptr->next;
    } else {
        start = ptr->next;
    }

    if (ptr->next != NULL) {
        ptr->next->prev = ptr->prev;
    }

    temp = ptr;
    free(temp);
    return start;
};
int main() {
    int ch;
    printf("Enter the choice\n");
    printf("1. Create\n");
    printf("2. Insert Before\n");
    printf("3. Delete\n");
    printf("4. Display\n");
    printf("5. Exit\n");

    while (1) {
        printf("Enter the choice\n");
        scanf("%d", &ch);
        switch (ch) {
        case 1:
            start = create_ll(start);
            printf("LL created\n");
            break;
        case 2:
            start = insert_before(start);
            break;
        case 3:
            start = delete_node(start);
            break;
        case 4:
            display(start);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
