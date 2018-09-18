#include<iostream>

using namespace std;


void intercambio(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void ShakerSort(int* a, int n)
{
	int* i,*j,*k;
	for(i=a; i<a+n; n--,i++)
	{
		for(j=i+1; j<a+n; j++)
		{
			if(*j < *(j-1))
				intercambio(j, j-1);
		}
		for(k=a+n-1; k>i; k--)
		{
			if(*k < *(k-1))
				intercambio(k,(k-1));
		}
	}
}

int main()
{
	int n;
	cout<<"ingrese la cantidad de elmentos a ser ordenados: ";
	cin>>n;

	int arr[n];
	int x=0;
	for(int *i = arr; i <arr+n; i++)
	{
		cout<<"ingrese el elemento "<<++x<<": ";
		cin>>*i;
	}

	ShakerSort(arr, n);

	for (int *i = arr; i <arr+n; i++)
		cout<<" "<<*i;

	return 0;
}
