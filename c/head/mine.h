#ifndef ARRAY_TOOLS_H
#define ARRAY_TOOLS_H


int mine();
int (*mineTotal(int arr[], int num, int arr1[][10], int row, int col, int flag1, int mineModel))[10];

void **develop(int arr[][10], int row, int col, int mineModel);

int *mineTotal1(int randArr[], int num, int mineCount, int mineCount2);

int (*Judg_Mine_Next(int arr[][10],int row, int col, int mineModel))[10];

int (*users(int user[][10], int arr[][10], int row, int col, int mineModel, int *mine_flag))[10];

int Judg_Mine(int arr[][10],int row, int col, int mineModel);

#endif