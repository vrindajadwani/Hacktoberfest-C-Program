// LinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node {
    int data;
    struct Node* next;
}*first = NULL;

void create(int A[], int n) {
    struct Node* t, * last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1;i < n;i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(struct Node* p) {
    while (p != 0) {
        printf("%d ", p->data);
        p = p->next;
    }
}

int sum(struct Node* p) {
    int sum = 0;
    while (p != NULL) {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int count(struct Node* p) {
    int count = 0;
    while (p != NULL) {
        count++;
        p = p->next;
    }
    return count;
}

int maxElement(struct Node* p) {
    int max = INT_MIN;
    while (p != NULL) {
        if (p->data > max)
            max = p->data;
        p = p->next;
    }
    return max;
}
int main()
{

    int A[] = { 2,3,4,5,6,7,8,9,10 };
    create(A, 9);
    Display(first);
    printf("\n");
    printf("%d \n", sum(first));
    printf("%d \n", count(first));
    printf("%d \n ", maxElement(first));
    return 0;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
