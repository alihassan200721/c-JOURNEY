#include <assert.h>
#include <stdio.h>
#include <sys/ucontext.h>

void Assalamulaikum();
void Bonjour();

int main() {
    printf("Enter f for frech or m for muslim: ");
    char ch;
    scanf("%c", &ch);

    if (ch == 'f') {
        Bonjour();
    } else if (ch == 'm') {
        Assalamulaikum();
    } else {
        printf("Invalid input! \n");
    }


    return 0;
}


void Assalamulaikum() {
    printf("Assalamulaikum! \n");
}

void Bonjour() {
    printf("Bonjour! \n");
}
