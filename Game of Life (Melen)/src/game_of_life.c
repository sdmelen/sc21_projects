#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define for_x for (int x = 0; x < w; x++)
#define for_y for (int y = 0; y < h; y++)
#define for_xy for_x for_y

void show(void *u, int w, int h);
void evolve(void *u, int w, int h);
void settings(int *speed);
void game(int w, int h, int speed, const char *filename);

int main(int argc, char *argv[]) {
    int w = 80, h = 25;
    int speed = 10000000;
    const char *filename = NULL;

    if (argc > 1) {
        filename = argv[1];
    }

    game(w, h, speed, filename);
    return 0;
}

void show(void *u, int w, int h) {
    int(*univ)[w] = u;
    printf("\033[H");
    for_y {
        for_x printf(univ[y][x] ? "@" : " ");
        printf("\033[E");
    }
    fflush(stdout);
}

void fix_border(int *posx, int *posy) {
    if (*posy == -1) *posy = 24;
    if (*posy == 25) *posy = 0;
    if (*posx == -1) *posx = 79;
    if (*posx == 80) *posx = 0;
}

void evolve(void *u, int w, int h) {
    unsigned(*univ)[w] = u;
    unsigned new[h][w];

    for_y for_x {
        int n = 0;
        for (int y1 = y - 1; y1 <= y + 1; y1++)
            for (int x1 = x - 1; x1 <= x + 1; x1++)
                if (univ[(y1 + h) % h][(x1 + w) % w]) n++;
        fix_border(&x, &y);

        if (univ[y][x]) n--;
        new[y][x] = (n == 3 || (n == 2 && univ[y][x]));
    }
    for_y for_x univ[y][x] = new[y][x];
}

void settings(int *speed) {
    printf("Choose speed from [1 to 5]: \n");

    char spd = getchar();
    switch (spd) {
        case '1':
            *speed = 1111111;
            break;
        case '2':
            *speed = 500000;
            break;
        case '3':
            *speed = 250000;
            break;
        case '4':
            *speed = 50000;
            break;
        case '5':
            *speed = 10000;
            break;
    }
    while (getchar() != '\n')
        ;
}

void game(int w, int h, int speed, const char *filename) {
    unsigned univ[h][w];
    if (filename) {
        FILE *fp = fopen(filename, "r");
        if (!fp) {
            perror("Error opening file");
            exit(EXIT_FAILURE);
        }
        for_y for_x { fscanf(fp, "%u", &univ[y][x]); }
        fclose(fp);
    } else {
        for_xy univ[y][x] = rand() < RAND_MAX / 6 ? 1 : 0;
    }

    settings(&speed);

    while (1) {
        show(univ, w, h);
        evolve(univ, w, h);
        usleep(speed);
    }
}
