#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);


void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **list, listint_t **node1, listint_t **node2);
listint_t *create_listint(const int *array, size_t size);
void swap_integers(int *a, int *b);
int partition(int *arr, int first, int last, size_t size);
void quick_sort(int *array, size_t size);
void quickSort(int *arr, int first, int last, size_t size);
void swap(int *a, int *b);
void shell_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void counting_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void radix_sort(int *array, size_t size);




#endif
