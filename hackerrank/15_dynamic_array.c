// https://www.hackerrank.com/challenges/dynamic-array-in-c/problem

/* Reference: To understand the dynamic array
 * https://www.programiz.com/c-programming/c-dynamic-memory-allocation
 * https://www.techiedelight.com/dynamically-allocate-memory-for-2d-array/
*/


#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    // int max_no_of_books_in_shelf = 1100;
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    
    total_number_of_books = (int*)malloc(total_number_of_shelves * sizeof(int));
    total_number_of_pages = (int**)malloc(total_number_of_shelves * sizeof(int*));
    
    for (int i=0; i<total_number_of_shelves;i++)
    {
        total_number_of_books[i] = 0;
        // total_number_of_pages[i] = (int*)malloc(max_no_of_books_in_shelf * sizeof(int));      
        total_number_of_pages[i] = (int*)malloc(sizeof(int)); 
    }
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             * Insert a book with 'y' pages at the end of 'x-th' shelf
             */
            int x, y;
            scanf("%d %d", &x, &y);
            *(total_number_of_books + x) += 1;
            *(total_number_of_pages+x)=realloc(*(total_number_of_pages+x), *(total_number_of_books+x)*sizeof(int));
            *(*(total_number_of_pages+x)+*(total_number_of_books+x)-1)=y; // 2D-array

            /* Rewritten the above method with array subscript
            total_number_of_books[x] += 1;
            total_number_of_pages[x] = realloc(total_number_of_pages[x],
            total_number_of_books[x]*sizeof(int));
            total_number_of_pages[x][total_number_of_books[x]-1] =y;
            */

        } else if (type_of_query == 2) {
            // Print the number of pages in the y-th book on the x-th shelf
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            // Print the number of books on the x-th shelf
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}