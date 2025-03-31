#include <stdio.h>

typedef struct {
    int id;
    int price;
    char title[100];
} Book;

int totalPrice(Book books[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += books[i].price;
    }
    return sum;
}

void printBook(Book books[], int n, int id) {
    for (int i = 0; i < n; i++) {
        if (books[i].id == id) {
            printf("%d %s\n", books[i].price, books[i].title);
            return;
        }
    }
}

int main() {
    Book books[6] = {
        {1, 1000, "All the Light We Cannot See"},
        {2, 300, "The 38 Letters from J.D. Rockefeller to his son"},
        {3, 1000, "The Ballad of Songbirds and Snakes"},
        {4, 550, "Killers of the Flower Moon"},
        {5, 870, "Elon Musk"},
        {6, 1344, "Milk and Honey 12-Month 2024"}
    };
    
    int input;
    scanf("%d", &input);
    
    if (input == 0) {
        printf("%d\n", totalPrice(books, 6));
    } else if (input >= 1 && input <= 6) {
        printBook(books, 6, input);
    }
    
    return 0;
}
