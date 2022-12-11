// Lesson_in_classroom_11.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;
//void calc(int* a, int* b, char* op)
//{
//	switch (*op)
//	{
//	case '+':
//	{
//		cout << *a + *b;
//		break;
//	}
//	case '-':
//	{
//		cout << *a - *b;
//		break;
//	}
//	case '*':
//	{
//		cout << *a * *b;
//		break;
//	}
//	case '/':
//	{
//		if (b == 0)
//			cout << " erroor";
//		else
//			cout << *a / *b;
//		break;
//	}
//	}
//}

void CreateArr(int* arr, const int* size)
{
	for (int i = 0; i < *size; i++) {
		*(arr + i) = rand() % (20 - (-20)) + (-20);
	}	
}
void Element(int* A, int* B, int* C,const int*sizeA, const int* sizeB, const int* sizeC)  // Заполняем первым массивом
{
	int r = 0;
	int qwe = 0;
	for (int k = 0; k < *sizeC; k++)
		*(C + k) = 0;
		for (int i = 0; i < *sizeA; i++) {
			for (int j = 0; j < *sizeB; j++) {
				if (*(A + i) != *(B + j))
				{
					*(C + r) = *(A + i);
					qwe++;
				}
				if (qwe == *sizeB)
				{
					*(C + r) = *(A + i);
					r++;
				}
			}
			qwe = 0;
		}
}

void Element1(int* A, int* B, int* C, const int* sizeA, const int* sizeB, const int* sizeC)  // Заполняем вторым массивом
{
	int r = 0;
	int qwe = 0;
	for (int k = 0; k < *sizeC; k++)
		*(C + k) = 0;
	for (int i = 0; i < *sizeB; i++) {
		for (int j = 0; j < *sizeA; j++) {
			if (*(B + i) != *(A + j))
			{
				*(C + r) = *(A + i);
				qwe++;
			}
			if (qwe == *sizeA)
			{
				*(C + r) = *(B + i);
				r++;
			}
		}
		qwe = 0;
	}
}

void view(int* C, const int* size)
{
	for (int i = 0; i < *size; i++) {
		cout << *(C + i) << "  ";
	}
}

void obmen(int*a,int*b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
	cout << *a << *b;
}

int summa(int* arr,int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += *(arr + i);
	}
	cout << sum;
	return sum;
}

void sort(int* arr, const int* size, bool vid = false)
{
	if (vid) {
		for (int i = 0; i < *size; i++)
			for (int j = 0; j < *size - 1; j++) {
				if (*(arr + j) > *(arr + j + 1))
					swap(*(arr + j), *(arr + j + 1));
			}
	}
	else
		for (int i = 0; i < *size; i++)
			for (int j = 0; j < *size - 1; j++) {
				if (*(arr + j) < *(arr + j + 1))
					swap(*(arr + j), *(arr + j + 1));
			}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	setlocale(0, "");

	/*int a, b;
	char op;
	cin >> a >> b;
	cin >> op;
	int* pa = &a;
	int* pb = &b;
	char* pop = &op;
	calc(pa, pb, pop);*/

	/*const int sizeA = 5;
	const int sizeB = 10;
	const int sizeC = sizeA + sizeB;
	int A[sizeA], B[sizeB], C[sizeA + sizeB];
	const int* psizeA = &sizeA;
	const int* psizeB = &sizeB;
	const int* psizeC = &sizeC;
	CreateArr(A, psizeA);
	cout << endl;
	CreateArr(B, psizeB);
	cout << endl;
	Element1(A, B, C, psizeA, psizeB, psizeC);
	view(C, psizeC);*/

	/*int a,b;
	cin >> a >> b;
	int* pa = &a;
	int* pb = &b;
	obmen(pa,pb);*/
	
	//const int size = 10;
	//int arr[size];
	///*summa(arr, size);*/
	//const int* psize = &size;	

	//CreateArr(arr, psize);
	//view(arr, psize);
	//sort(arr, psize);
	//cout << endl;
	//view(arr,psize);
	//sort(arr, psize, true);
	//cout << endl;
	//view(arr, psize);

	const int size = 10;
	int arr[size];
}

