#include <stdio.h>

void aufgabe1();
void muster1();
void muster2();

int main(void) {
    int aufgabe;
    printf("Waehle die Aufgabe aus:\n");
    scanf("%d", &aufgabe);

    if (aufgabe == 1) {
        aufgabe1();

    }else if (aufgabe == 2) {
        int muster;
        printf("Waehle das Muster aus: \n");
        scanf("%d", &muster);
        if (muster == 1) {
            muster1();
        }else if (muster == 2) {
            muster2();
        }
    }

    return 0;
}


void aufgabe1() {
    printf("1. Aufgabe");
}

void muster1() {
    printf("2. Aufgabe, Muster 1");

}

void muster2() {
    printf("2. Aufgabe, Muster 2");
}