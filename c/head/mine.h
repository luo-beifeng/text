#ifndef ARRAY_TOOLS_H
#define ARRAY_TOOLS_H
#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int mine();

int merge(int num, int num2, int (*p)(int, int));
int add(int num, int num2);
int sub(int num, int num2);
int mul(int num, int num2);

/* 扫雷
void mineTotal(int arr[], int num, int arr1[][10], int row, int col, int flag1, int mineModel);
void **develop(int arr[][10], int row, int col, int mineModel);

void mineTotal1(int randArr[], int num, int mineCount, int mineCount2);

void Judg_Mine_Next(int arr[][10],int row, int col, int mineModel);

void users(int user[][10], int arr[][10], int row, int col, int mineModel, int userModel2, int userModel, int *mine_flag);

int Judg_Mine(int arr[][10],int row, int col, int mineModel);

int check(int arr[][10], int i, int j, int mineModel) ;

int unfolding(int arr[][10], int user[][10], int row, int col, int mineModel);

void uesr_main(int user[][10], int row, int col);

void user_init(int user[][10], int row, int col);
*/

#endif