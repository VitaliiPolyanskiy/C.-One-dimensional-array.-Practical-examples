#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	// Определение размера массива.
	const int nSize = 5;
	// Инициализация массива.
	int ar[nSize] = { 4, -5, 3, 1, 7 };
	// Объявление переменной для суммы.
	int nSum = 0;
	// Цикл, перебирающий все элементы массива.
	for (int i = 0; i < nSize; i++)
	{
		// Добавление значения текущего элемента массива к общей сумме.
		nSum += ar[i];
	}
	// Вывод результирующей суммы.
	cout << "Sum is " << nSum << endl << endl;

	
	// Ввести массив из 5 чисел, а  затем вывести его в обратном порядке. 
	int arr1[nSize];
	for (int i = 0; i < nSize; i++)
	{
		cout << "Enter " << i << " element of array: ";
		cin >> arr1[i];
	}
	cout << "\nPrint an array in reverse order\n";
	for (int i = nSize - 1; i >= 0; i--)
	{
		cout << arr1[i] << '\t';
	}
	cout << endl << endl;

	
	// Создать массив из 20 случайных чисел. Вывести все элементы массива с четными индексами.
	srand(time(0));
	const int SIZE_OF_ARRAY = 20;
	int arr2[SIZE_OF_ARRAY];
	cout << "\nPrint an array with even indices\n";
	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		arr2[i] = rand() % 21 - 10; // -10 : 10
		if (i % 2 == 0)
			cout << arr2[i] << '\t';
	}
	cout << endl << endl;

	
	// Создать массив из 10 случайных чисел в диапазоне от - 20 до 20. 
	// Определить среднее арифметическое положительных элементов массива.
	const int SIZE = 10;
	int counter = 0;
	double average = 0;
	int arr3[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		arr3[i] = rand() % 41 - 20;
		cout << arr3[i] << '\t';
		if (arr3[i] > 0)
		{
			average += arr3[i];
			counter++;
		}
	}
	cout << "\nAverage of positive elements: " << average / counter;
	cout << endl << endl;

	// Создать массив из 20 случайных чисел в диапазоне от -10 до 30. 
	// Определить сумму элементов массива, расположенных в массиве после первого отрицательного элемента.
	int sum = 0;
	int arr4[SIZE_OF_ARRAY];
	bool negative = false;
	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		arr4[i] = rand() % 41 - 10;
		cout << arr4[i] << '\t';
		if (negative)
			sum += arr4[i];
		if (!negative && arr4[i] < 0)
			negative = true;
	}
	cout << "\nSum of elements after the first negative element: " << sum << endl << endl;

	// Создать массив из 20 случайных чисел. 
	// Определить минимальный и максимальный элемент массива (вывести значение и порядковый номер)
	int arr5[SIZE_OF_ARRAY];
	int max = 0, min = 0;
	for (int i = 0; i < SIZE_OF_ARRAY; i++)
	{
		arr5[i] = rand() % 41 - 20;
		cout << arr5[i] << '\t';
		if (arr5[i] > arr5[max])
			max = i;
		if (arr5[i] < arr5[min])
			min = i;
	}
	cout << "\n\nMinimum element of array: " << arr5[min] << ". It is number: " << min << endl;
	cout << "\nMaximum element of array: " << arr5[max] << ". It is number: " << max << endl;

	return 0;
}