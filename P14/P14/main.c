#include <stdio.h>
#include <stdlib.h>
#define Student 3
#define EXAM 4
int minimum(const int grades[][EXAM], int pupils, int tests);
int maximum(const int grades[][EXAM], int pupils, int tests);
double average(const int setofGrades[], int tests);
void printArray(const int grades[][EXAM], int pupils, int tests);
int main() 
{
	const int StudentGrades[Student][EXAM] = {
		{77,68,86,73},
		{96,87,89,78},
		{70,90,86,81}
	};
	printf("The array is:\n");
	printArray(StudentGrades, Student, EXAM);

	printf("\n\nLowest grade: %d\nHighest grade: %d\n",
			minimum(StudentGrades,Student,EXAM),
			maximum(StudentGrades,Student,EXAM));
	for (int stu = 0; stu < Student; stu++)
	{
		printf("The averge grade for student %d is %.2f\n",
			stu, average(StudentGrades[stu], EXAM));
	}
}
int minimum(const int grades[][EXAM], int pupils, int tests)
{
	int lowest = 100;
	for (int i = 0; i < pupils; i++)
	{
		for (int j = 0; j < tests; j++)
		{
			if (grades[i][j] < lowest)
			{
				lowest = grades[i][j];
			}
		}
	}
	return lowest;
}
int maximum(const int grades[][EXAM], int pupils, int tests)
{
	int biggest = 0;
	for (int i = 0; i < pupils; i++)
	{
		for (int j = 0; j < tests; j++)
		{
			if (grades[i][j] > biggest)
			{
				biggest = grades[i][j];
			}
		}
	}
	return biggest;
}

double average(const int setofGrades[], int tests)
{
	double averge=0.0;
	for (int i = 0; i < tests; i++)
	{
		averge += setofGrades[i];
	}
	averge = averge / tests;
	return averge;
}
void printArray(const int grades[][EXAM], int pupils, int tests)
{
	printf("		 [0]  [1]  [2]  [3]\n");
	for (int i = 0; i < pupils; i++)
	{
		printf("StudentGrades[%d] ",i);
		for (int j = 0; j < tests; j++)
		{
			printf("%-5d", grades[i][j]);
		}
		printf("\n");
	}
}