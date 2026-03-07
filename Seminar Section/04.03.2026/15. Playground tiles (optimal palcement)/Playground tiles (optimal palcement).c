#include <stdio.h>
#include <stdlib.h>

/*
15.	На площадката пред жилищен блок трябва да се поставят плочки. Площадката е с форма на квадрат със страна N метра. 
Плочките са широки „W“ метра и дълги „L“ метра. На площадката има една пейка с ширина M метра и дължина O метра. Под нея не 
е нужно да се слагат плочки. Всяка плочка се поставя за 0.2 минути. Напишете програма, която чете от конзолата размерите на 
площадката, плочките и пейката и пресмята колко плочки са необходими да се покрие площадката и пресмята времето за поставяне 
на всички плочки.
*/

/* 
Пример: площадка с размер 20м. има площ 400кв.м. Пейка широка 1м. и дълга 2м., заема площ 2кв.м. 
Една плочка е широка 5м. и дълга 4м. има площ = 20кв.м. Площта която трябва да се покрие е 400 – 2 = 398 кв.м. 
Необходими са 398 / 20 = 19.90 плочки. Необходимото време е 19.90 * 0.2 = 3.98 минути.
*/

int main ()
{
    float N, W, L, M, O;
    printf("Enter the size of the square area (N): ");
    scanf("%f", &N);
    printf("Enter the width of the tile (W): ");
    scanf("%f", &W);
    printf("Enter the length of the tile (L): ");
    scanf("%f", &L);
    printf("Enter the width of the bench (M): ");
    scanf("%f", &M);
    printf("Enter the length of the bench (O): ");
    scanf("%f", &O);

    float area_square = N * N;
    float area_bench = M * O;
    float area_tile = W * L;

    float area_to_cover = area_square - area_bench;
    float tiles_needed = area_to_cover / area_tile;
    float time_needed = tiles_needed * 0.2;

    printf("Number of tiles needed: %.2f\n", tiles_needed);
    printf("Time needed to place all tiles: %.2f minutes\n", time_needed);

    return 0;
}