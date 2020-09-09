// SortAlgorthm.cpp : Defines the entry point for the application.
//

#include "SortAlgorthm.h"
#include <iostream>
using namespace std;

//冒泡排序
//两两一排序，把最大的排到后面
int main()
{
	int a[10] = { 1, 3, 2,7,4,9,6,0,8,5 };

	cout << "display: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10 - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	cout << "display after sort: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cin.get();
}


//选择排序
//从数组中选择最大或者最小的元素，放在第一个，以此类推，放第二个，第三个

