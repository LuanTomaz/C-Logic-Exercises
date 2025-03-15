#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h> 

#define WIDTH 40
#define HEIGHT 15

double y, x;
int i, j;
int frame;
void clear_screen() {
    system("cls"); 
}

void draw_heart(int frame) {
    char heart[HEIGHT][WIDTH];

    for (i = 0; i < HEIGHT; i++)
        for (j = 0; j < WIDTH; j++)
            heart[i][j] = ' ';

    for (y = 1.3; y >= -1.1; y -= 0.1) {
        for (x = -1.2; x <= 1.2; x += 0.05) {
            double eq = pow(x * x + y * y - 1, 3) - x * x * y * y * y;
            if (eq <= 0.0) {
                int col = (int)((x + 1.2) * (WIDTH / 2.4));
                int row = (int)((1.3 - y) * (HEIGHT / 2.6));
                heart[row][col] = (frame % 2 == 0) ? '*' : '@'; 
            }
        }
    }

    for (i = 0; i < HEIGHT; i++) {
        for (j = 0; j < WIDTH; j++) {
            printf("%c", heart[i][j]);
        }
        printf("\n");
    }
}

void print_message() {
    printf("\n");
    printf(" Para voce Suy :)\n");
    printf(" -----------------------------------\n");
    printf(" | Voce ilumina os dias como o sol  |\n");
    printf(" | E deixa tudo mais bonito.   :::  |\n");
    printf(" | Feito em C, mas de coracao! :::  |\n");
    printf(" -----------------------------------\n");
    printf("\n");
}

int main() {
    for (frame = 0; frame < 10; frame++) {
        clear_screen();
        draw_heart(frame);
        Sleep(200); 
    }

    print_message();
    return 0;
}

