#pragma once
template <typename T, typename K>
struct TwoValueTuple { // Because these tasks are so ruthless to output (requiring two outputs) instead of proper output system, im just gonna do this
	T A;
	K B;

	TwoValueTuple(T a, K b) {
		A = a;
		B = b;
	}
};

class Labwork3
{
public:
	static int RunTasks();
	static TwoValueTuple<int, double> Task1main(double A, double B);
	static TwoValueTuple<int, double> Task2main(double P, double M);
	static TwoValueTuple<int, double> Task3main(double A);
	static int Task4main(int N);
	static bool Task5main(int N);

private:
	static int TaskSelection();
	static int TaskSelectionInputHandling(int& n);
	static int TaskSelectionInputN(int& n);

	static int Task1();
	static int Task1InputHandling(double& A, double& B);
	static int Task1InputA(double& A);
	static int Task1InputB(double& B);

	static int Task2();
	static int Task2InputHandling(double& P, double& M);
	static int Task2InputP(double& P);
	static int Task2InputM(double& M);

	static int Task3();
	static int Task3InputHandling(double& A);
	static int Task3InputA(double& A);

	static int Task4();
	static int Task4InputHandling(int& N);
	static int Task4InputN(int& N);

	static int Task5();
	static int Task5InputHandling(int& N);
	static int Task5InputN(int& N);
};

