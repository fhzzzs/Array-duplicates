/*
	Ao, Ivan
	Ni, Jiacheng

	August 27, 2020

	CS A250

	Lab #1
*/

// Definition function deleteDuplicates
void deleteDuplicates(int a[], int& numOfElements);
// Your code here...

void deleteDuplicates(int a[], int& numOfElements)
{
	for (int i = 0; i < numOfElements; ++i)
	{
		for (int j = i + 1; j < numOfElements; ++j)
		{
			if (a[i] == a[j])
			{
				for (int z = j; z < numOfElements; ++z)	//move all the element to the left by 1;
				{
					a[z] = a[z + 1];
				}
				numOfElements--;	//after move all the element, num of elements  
				j--;				//and j need decrease by 1
			}
		}
	}
}

// Definition function printArray
void printArray(int a[], int& numOfElements);
// Your code here...
void printArray(int a[], int& numOfElements)
{
	for (int i = 0; i < numOfElements; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}