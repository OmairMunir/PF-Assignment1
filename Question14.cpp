#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
	float annualInterestRate;
	float monthlyInterestRate;
	float loanAmount;
	float monthlyPayments;
	float interestPayment;
	float interestPaid;

	int numberOfPayments;
	
	cout << "Enter loan amount: ";
	cin >> loanAmount;

	cout << "Enter number of payments: ";
	cin >> numberOfPayments;

	cout << "Enter annual interest rate: ";
	cin >> annualInterestRate;

	monthlyInterestRate = annualInterestRate / 12.0f;
	monthlyInterestRate /= 100.0f;
	
	float rateCalculation = pow(1 + monthlyInterestRate, numberOfPayments);
	
	monthlyPayments = ((monthlyInterestRate * rateCalculation) / (rateCalculation - 1)) * loanAmount;

	interestPayment = monthlyPayments * numberOfPayments;
	interestPaid = interestPayment - loanAmount;

	cout << setprecision(2) << fixed;
	cout << "Loan Amount:" << setw(30) << "$" << setw(9) << loanAmount << "\n";

	cout << setprecision(0) << fixed;
	cout << "Monthly Interest Rate:" << setw(28) << monthlyInterestRate * 100 << "%" << "\n";
	cout << "Number of Payments:" << setw(32) << numberOfPayments << "\n";

	cout << setprecision(2) << fixed;
	cout << "Monthly Payments:" << setw(25) << "$" << setw(9) << monthlyPayments << "\n";
	cout << "Amount Paid Back:" << setw(25) << "$" << setw(9) << interestPayment << "\n";
	cout << "Interest Paid:" << setw(28) << "$" << setw(9) << interestPaid << "\n";

	return 0;
}