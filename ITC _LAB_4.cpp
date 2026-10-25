#include<iostream>
using namespace std;
int main()
{
	//Sharoon Naseem 
	//L1F26BSCS0273 
	//A7
	//Task 01
	int num;
    cout << "Enter an integer: " << endl;
    cin >> num;
    if (num > 0) {
        cout << "Positive number" << endl;
    }

    //Zero and negative numbers do not satisfy "num > 0"
    //So the message is not printed
	
	//Sharoon Naseem 
	//L1F26BSCS0273 
	//A7
	//Task 02
	int billAmount;
	cout << "Enter bill amount: " << endl;
    cin >> billAmount;
    cout << "Bill amount: Rs. " << billAmount << endl;
    if (billAmount >= 5000) {
        cout << "You qualify for a discount." << endl;
    }

    //">=" is useful because it includes "5000" value itself
	//but ">" would not include it.

	//Sharoon Naseem 
	//L1F26BSCS0273 
	//A7
	//Task 03
	int num;
    cout << "Enter an integer: " << endl;
    cin >> num;
	if (num % 2 == 0) {
        cout << "Even number" << endl;
    } else {
        cout << "Odd number" << endl;
    }
	
	//Zero is "even" because 0 divided by 2 gives no remainder
	//Therefore it satisfies  "num % 2 == 0"
	
	//Sharoon Naseem 
	//L1F26BSCS0273 
	//A7
	//Task 04
	int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    if (age >= 18) {
        cout << "Eligible to vote" << endl;
    } else {
        cout << "Not eligible to vote" << endl;
    }

	//Sharoon Naseem 
	//L1F26BSCS0273 
	//A7
	//Task 05
	int firstNumber, secondNumber;
    cout << "Enter two numbers: " << endl;
    cin >> firstNumber >> secondNumber;
    if (firstNumber > secondNumber) {
        cout << "First number is greater" << endl;
    } else {
        cout << "First number is not greater" << endl;
    }
	
	//When both numbers are equal, "firstNumber > secondNumber" is false
	//The program, therefore, executes the else block
	//The condition does not check ">=" for (5,5)

	//Sharoon Naseem 
	//L1F26BSCS0273 
	//A7
	//Task 06
	int marks;
    cout << "Enter marks (0-100): " << endl;
    cin >> marks;
    if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    //highest range is checked first because an "if-else-if" chain executes only the first true branch
	//Checking "marks >= 60" first would incorrectly assign Grade D to marks of 90

		//Sharoon Naseem 
	//L1F26BSCS0273 
	//A7
	//Task 07
	int temp;
    cout << "Enter temperature in Celsius: " << endl;
    cin >> temperature;
    if (temp < 10) {
        cout << "Weather: Cold" << endl;
    } else if (temp < 25) {
        cout << "Weather: Pleasant" << endl;
    } else if (temp < 35) {
        cout << "Weather: Warm" << endl;
    } else {
        cout << "Weather: Hot" << endl;
    }

	//The program first checks whether "temp < 10", which is false
	//then it checks "temp < 25", which is true, so it prints Weather: Pleasant
	//The remaining conditions are skipped

	//Sharoon Naseem 
	//L1F26BSCS0273 
	//A7
	//Task 08
	int marks;
    cout << "Enter marks: " << endl;
    cin >> marks;
    if (marks >= 50) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }

    // "=" assigns the value, while "==" compares two values.
    // ">= 50" checks whether marks are at least 50

		//Sharoon Naseem 
	//L1F26BSCS0273 
	//A7
	//Task 09
	int units;
    cout << "Enter monthly units: " << endl;
    cin >> units;
    if (units <= 100) {
        cout << "Usage category: Low usage" << endl;
    } else if (units <= 300) {
        cout << "Usage category: Medium usage" << endl;
    } else {
        cout << "Usage category: High usage" << endl;
    }

	//Sharoon Naseem 
	//L1F26BSCS0273 
	//A7
	//Task 10
	int marks;
    cout << "Enter marks: " << endl;
    cin >> marks;
    if (marks >= 85) {
        cout << "Scholarship awarded" << endl;
    } else {
        cout << "Scholarship not awarded" << endl;
    }

	//Sharoon Naseem 
	//L1F26BSCS0273 
	//A7
	//Task 11
	int visitorAge;
	cout << "Enter visitor age: " << endl;
    cin >> visitorAge;
    if (visitorAge < 0) {
        cout << "Invalid age" << endl;
    } else if (visitorAge < 5) {
        cout << "Free entry" << endl;
    } else if (visitorAge <= 17) {
        cout << "Child/Student ticket: Rs. 200" << endl;
    } else if (visitorAge <= 59) {
        cout << "Adult ticket: Rs. 500" << endl;
    } else {
        cout << "Senior ticket: Rs. 300" << endl;
    }

	//conditions must be arranged so that every valid age belongs to exactly one category
	//because the earlier branches have already checked lower ages
	//next condition covers the next range without repeating



    return 0;
}