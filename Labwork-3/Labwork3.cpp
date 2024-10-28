#include "Labwork3.h"
#include <iostream>
#include <iomanip>
#define NO_EXCEPTION 0x0000
#define INVALID_INPUT_EXCEPTION -0x0001

using namespace std;

int Labwork3::RunTasks()
{
	TaskSelection();

	return 0;
}

#pragma region Task selection

int Labwork3::TaskSelection()
{
	int taskNumber;
	TaskSelectionInputHandling(taskNumber);

	switch (taskNumber) {
	case 1:
		Task1();
		break;
	case 2:
		Task2();
		break;
	case 3:
		Task3();
		break;
	case 4:
		Task4();
		break;
	case 5:
		Task5();
		break;
	}

	return 0;
}

int Labwork3::TaskSelectionInputHandling(int& n)
{
	while (TaskSelectionInputN(n))
		cout << "Invalid input\n";

	return NO_EXCEPTION;
}

int Labwork3::TaskSelectionInputN(int& n)
{
	cout << "Choose task number (1-5): ";
	cin >> n;

	if (n < 1 || n > 5)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

#pragma endregion

#pragma region Task1

int Labwork3::Task1()
{
	double A, B;
	Task1InputHandling(A, B);

	TwoValueTuple<int, double> t = Task1main(A, B);
	cout << "\nB can fit in A " << t.A << " times\nWith " << t.B << " of A remaining\n";

	return NO_EXCEPTION;
}

int Labwork3::Task1InputHandling(double& A, double& B)
{
	while (Task1InputA(A))
		cout << "Invalid input\n";

	while (Task1InputB(B))
		cout << "Invalid input\n";

	return NO_EXCEPTION;
}

int Labwork3::Task1InputA(double& A)
{
	cout << "Input A (>= 0): ";
	cin >> A;

	if (A < 0)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

int Labwork3::Task1InputB(double& B)
{
	cout << "Input B (> 0): ";
	cin >> B;

	if (B <= 0)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

TwoValueTuple<int, double> Labwork3::Task1main(double A, double B)
{
	int count = 0;

	while(A - B > 0) {
		A -= B;
		count++;
	}

	return {count, A};
}

#pragma endregion

#pragma region Task 2

int Labwork3::Task2()
{
	double P, M;
	Task2InputHandling(P, M);

	TwoValueTuple<int, double> t = Task2main(P, M);
	cout << "\nSkier overdid the goal day " << t.A << " \nWith " << t.B << "km\n";
	cout << fixed << setprecision(5) << t.B;
	
	return NO_EXCEPTION;
}

int Labwork3::Task2InputHandling(double& P, double& M)
{
	while (Task2InputP(P))
		cout << "Invalid input\n";

	while (Task2InputM(M))
		cout << "Invalid input\n";

	return NO_EXCEPTION;
}

int Labwork3::Task2InputP(double& P)
{
	cout << "Input P (0 <= P <= 50): ";
	cin >> P;

	if (P < 0 || P > 50)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

int Labwork3::Task2InputM(double& M)
{
	cout << "Input M (>= 0): ";
	cin >> M;

	if (M < 0)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

TwoValueTuple<int, double> Labwork3::Task2main(double P, double M) // I could deal with overflow, but it gets clunky quickly
{
	P = P * 0.01 + 1;
	
	int day = 0;
	double S = 0;
	for (double distanceTraveledToday = 10; S <= M; distanceTraveledToday *= P) {
		S += distanceTraveledToday;
		day++;
	}

	return {day, S};
}

#pragma endregion

#pragma region Task 3

int Labwork3::Task3()
{
	double A;
	Task3InputHandling(A);

	TwoValueTuple<int, double> t = Task3main(A);
	cout << "\nWith K = " << t.A << "\nLongest distance under A is " << t.B << "\n";

	return NO_EXCEPTION;
}

int Labwork3::Task3InputHandling(double& A)
{
	while (Task3InputA(A))
		cout << "Invalid input\n";

	return NO_EXCEPTION;
}

int Labwork3::Task3InputA(double& A)
{
	cout << "Input A (> 1): ";
	cin >> A;

	if (A <= 1)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

TwoValueTuple<int, double> Labwork3::Task3main(double A)
{
	int K = 0;
	double sum = 0;
	double nextAdditor = 0;
	
	while (sum + nextAdditor < A) {
		sum += nextAdditor;
		K++;
		nextAdditor = K / (K + 1.0);
	}

	return {K - 1, sum};
}

#pragma endregion

#pragma region Task 4

int Labwork3::Task4()
{
	int N;
	Task4InputHandling(N);

	cout << endl << Task4main(N) << endl;
	
	return NO_EXCEPTION;
}

int Labwork3::Task4InputHandling(int& N)
{
	while (Task4InputN(N))
		cout << "Invalid input\n";

	return NO_EXCEPTION;
}

int Labwork3::Task4InputN(int& N)
{
	cout << "Input N (N > 0): ";
	cin >> N;

	if (N <= 0)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

int Labwork3::Task4main(int N)
{
	int backN = 0;
	while (N > 0) {
		backN = backN * 10 + N % 10;
		N /= 10;
	}

	return backN;
}

#pragma endregion

#pragma region Task 5

int Labwork3::Task5()
{
	int N;
	Task5InputHandling(N);

	cout << endl << Task5main(N) << endl;
	
	return NO_EXCEPTION;
}

int Labwork3::Task5InputHandling(int& N)
{
	while (Task5InputN(N))
		cout << "Invalid input\n";

	return NO_EXCEPTION;
}

int Labwork3::Task5InputN(int& N)
{
	cout << "Input N (> 0): ";
	cin >> N;

	if (N <= 0)
		return INVALID_INPUT_EXCEPTION;
	return NO_EXCEPTION;
}

bool Labwork3::Task5main(int N)
{
	int prev = 1;
	int current = 1;

	while (current < N) {
		int temp = prev + current;
		prev = current;
		current = temp;
	}

	return current == N;
}

#pragma endregion