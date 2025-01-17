﻿#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	for (int i = 0; i < * end - 1; i++)
	{
		for (int j = * end - 1; j > i; j--)
		{
			if (item* begin[j - 1] > * begin[j])
			{
				int temp = * begin[j];
				* begin[j] =  * begin[j - 1];
				* begin[j - 1] = temp;
			}
		}
	}
}
