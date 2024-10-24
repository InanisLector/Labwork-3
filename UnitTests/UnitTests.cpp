#include "pch.h"
#include "CppUnitTest.h"
#include "../Labwork-3/Labwork3.cpp"
#define EPSILON 0.00001

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(Task1UnitTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double A = 10;
			double B = 3;

			TwoValueTuple<int, double> tuple = Labwork3::Task1main(A, B);

			bool validation = tuple.A == 3;
			validation &= fabs(tuple.B - 1) < EPSILON;

			Assert::IsTrue(validation);
		}

		TEST_METHOD(TestMethod2)
		{
			double A = 5.7;
			double B = 1.8 ;

			TwoValueTuple<int, double> tuple = Labwork3::Task1main(A, B);

			bool validation = tuple.A == 3;
			validation &= fabs(tuple.B - 0.3) < EPSILON;

			Assert::IsTrue(validation);
		}

		TEST_METHOD(TestMethod3)
		{
			double A = 0;
			double B = 10;

			TwoValueTuple<int, double> tuple = Labwork3::Task1main(A, B);

			bool validation = tuple.A == 0;
			validation &= fabs(tuple.B - 0) < EPSILON;

			Assert::IsTrue(validation);
		}

		TEST_METHOD(TestMethod4)
		{
			double A = 7.31;
			double B = 0.01;

			TwoValueTuple<int, double> tuple = Labwork3::Task1main(A, B);

			bool validation = tuple.A == 731;
			validation &= fabs(tuple.B - 0) < EPSILON;

			Assert::IsTrue(validation);
		}

		TEST_METHOD(TestMethod5)
		{
			double A = 3.7;
			double B = 0.17;

			TwoValueTuple<int, double> tuple = Labwork3::Task1main(A, B);

			bool validation = tuple.A == 21;
			validation &= fabs(tuple.B - 0.13) < EPSILON;

			Assert::IsTrue(validation);
		}
	};
	TEST_CLASS(Task2UnitTests) {
	public: 

		TEST_METHOD(TestMethod1) {
			double P = 10;
			double M = 451;

			TwoValueTuple<int, double> tuple = Labwork3::Task2main(P, M);

			bool validation = tuple.A == 19;
			validation &= fabs(tuple.B - 465.99173) < EPSILON;

			Assert::IsTrue(validation);
		}

		TEST_METHOD(TestMethod2) {
			double P = 20;
			double M = 137;

			TwoValueTuple<int, double> tuple = Labwork3::Task2main(P, M);

			bool validation = tuple.A == 8;
			validation &= fabs(tuple.B - 139.15904) < EPSILON;

			Assert::IsTrue(validation);
		}

		TEST_METHOD(TestMethod3) {
			double P = 40;
			double M = 42;

			TwoValueTuple<int, double> tuple = Labwork3::Task2main(P, M);

			bool validation = tuple.A == 4;
			validation &= fabs(tuple.B - 53.6) < EPSILON;

			Assert::IsTrue(validation);
		}

		TEST_METHOD(TestMethod4) {
			double P = 50;
			double M = 450;

			TwoValueTuple<int, double> tuple = Labwork3::Task2main(P, M);

			bool validation = tuple.A == 9;
			validation &= fabs(tuple.B - 502.57812) < EPSILON;

			Assert::IsTrue(validation);
		}

		TEST_METHOD(TestMethod5) {
			double P = 0;
			double M = 100;

			TwoValueTuple<int, double> tuple = Labwork3::Task2main(P, M);

			bool validation = tuple.A == 11;
			validation &= fabs(tuple.B - 110) < EPSILON;

			Assert::IsTrue(validation);
		}
	};
	TEST_CLASS(Task3UnitTests) {
		TEST_METHOD(TestMethod1) {
			double A = 7.31;
			TwoValueTuple<int, double> tuple = Labwork3::Task3main(A);

			bool validation = tuple.A == 9;
			validation &= fabs(tuple.B - 7.07103) < EPSILON;

			Assert::IsTrue(validation);
		}

		TEST_METHOD(TestMethod2) {
			double A = 2.71828;
			TwoValueTuple<int, double> tuple = Labwork3::Task3main(A);

			bool validation = tuple.A == 4;
			validation &= fabs(tuple.B - 2.71667) < EPSILON;

			Assert::IsTrue(validation);
		}

		TEST_METHOD(TestMethod3) {
			double A = 2.7037;
			TwoValueTuple<int, double> tuple = Labwork3::Task3main(A);

			bool validation = tuple.A == 3;
			validation &= fabs(tuple.B - 1.91667) < EPSILON;

			Assert::IsTrue(validation);
		}

		TEST_METHOD(TestMethod4) {
			double A = 17.4;
			TwoValueTuple<int, double> tuple = Labwork3::Task3main(A);

			bool validation = tuple.A == 20;
			validation &= fabs(tuple.B - 17.35464) < EPSILON;

			Assert::IsTrue(validation);
		}

		TEST_METHOD(TestMethod5) {
			double A = 99;
			TwoValueTuple<int, double> tuple = Labwork3::Task3main(A);

			bool validation = tuple.A == 103;
			validation &= fabs(tuple.B - 98.7736) < EPSILON;

			Assert::IsTrue(validation);
		}
	};
	TEST_CLASS(Task4UnitTests) {
		TEST_METHOD(TestMethod1) {
			int N = 8563;
			Assert::AreEqual(Labwork3::Task4main(N), 3658);
		}

		TEST_METHOD(TestMethod2) {
			int N = 563214789;
			Assert::AreEqual(Labwork3::Task4main(N), 987412365);
		}

		TEST_METHOD(TestMethod3) {
			int N = 85221;
			Assert::AreEqual(Labwork3::Task4main(N), 12258);
		}

		TEST_METHOD(TestMethod4) {
			int N = 785412;
			Assert::AreEqual(Labwork3::Task4main(N), 214587);
		}

		TEST_METHOD(TestMethod5) {
			int N = 10;
			Assert::AreEqual(Labwork3::Task4main(N), 1);
		}
	};
	TEST_CLASS(Task5UnitTests) {
		TEST_METHOD(TestMethod1) {
			int N = 13;
			Assert::IsTrue(Labwork3::Task5main(N));
		}

		TEST_METHOD(TestMethod2) {
			int N = 15;
			Assert::IsFalse(Labwork3::Task5main(N));
		}

		TEST_METHOD(TestMethod3) {
			int N = 432;
			Assert::IsFalse(Labwork3::Task5main(N));
		}

		TEST_METHOD(TestMethod4) {
			int N = 10946;
			Assert::IsTrue(Labwork3::Task5main(N));
		}

		TEST_METHOD(TestMethod5) {
			int N = 6765;
			Assert::IsTrue(Labwork3::Task5main(N));
		}
	};
}