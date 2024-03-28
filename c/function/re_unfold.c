#include<stdio.h>
#include<stdlib.h>
#include"../head/mine.h"


int unfolding(int arr[][10],int row, int col, int mineModel)
{
    if (arr[row][col] != 0)
    {
        return arr[row][col];
    }
    return unfolding(arr, row - 1 , col, mineModel);
}