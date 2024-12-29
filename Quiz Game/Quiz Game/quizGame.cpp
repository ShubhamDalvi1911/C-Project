// C++ program for the above approach
#include <iostream>
#include <string>
using namespace std;

int Guess;
int Total;

// Question Class
class Question {
private:
	string Question_Text;
	string Answer_1;
	string Answer_2;
	string Answer_3;
	string Answer_4;
	int Correct_Answer;
	int Question_Score;

public:
	// Setter Function
	void setValues(string, string,
				string, string,
				string, int, int);

	// Function to ask questions
	void askQuestion();
};

// Driver code
int main()
{
	cout << "\n\n\t\t\t\tTHE DAILY QUIZ"
		<< endl;
	cout << "\nPress Enter to start "
		<< "the quiz... " << endl;

	// Input
	cin.get();

	string Name;
	int Age;

	// Input the details
	cout << "What is your name?"
		<< endl;
	cin >> Name;
	cout << endl;

	cout << "How old are you?"
		<< endl;
	cin >> Age;
	cout << endl;

	string Respond;
	cout << "Are you ready to take"
		<< " the quiz " << Name
		<< "? yes/no" << endl;
	cin >> Respond;

	if (Respond == "yes") {
		cout << endl;
		cout << "Good Luck!" << endl;
	}
	else {
		cout << "Okay Good Bye!" << endl;
		return 0;
	}

	// Objects of Question Class
	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;

	// 3 is the position of
	// correct answer
	q1.setValues("Question : Which of the following is the correct way to declare a constant variable in C++? ", "Answer 1 : const int x;",
				"Answer 2 : int const x;", "Answer 3 : int x;",
				"Answer 4 : Both A and B", 4, 10);
	q2.setValues("Question : What is the size of an int type variable in a 64-bit architecture (typically)?", "Answer 1 : 2 bytes",
				"Answer 2 : 4 bytes", "Answer 3 : 8 bytes",
				"Answer 4 : It depends on the compiler", 2, 10);
	q3.setValues("Question : Which of the following correctly defines a pointer in C++?", "Answer 1 : int *p;",
				"Answer 2 : int p*;", "Answer 3 : int p&;",
				"Answer 4 : int * p;", 1, 10);
	q4.setValues("Question :  Which of the following concepts is NOT supported by C++?", "Answer 1 : Encapsulation",
				"Answer 2 : Reflection", "Answer 3 : Inheritance",
				"Answer 4 : Polymorphism", 2, 10);
	q5.setValues("Question : What is the purpose of a constructor in C++?", "Answer 1 : Initialize objects",
				"Answer 2 : Allocate memory", "Answer 3 : Destroy objects",
				"Answer 4 : Deallocate memory", 1, 10);
	q6.setValues("Question : Which keyword is used to handle exceptions in C++?", "Answer 1 : catch",
				"Answer 2 : try", "Answer 3 : throw",
				"Answer 4 : All of the above", 4, 10);
	q7.setValues("Question : Which of the following is NOT a valid access specifier in C++?", "Answer 1 : public",
				"Answer 2 : private", "Answer 3 : internal",
				"Answer 4 : protected", 3, 10);
	q8.setValues("Question : Which of these operators cannot be overloaded in C++?", "Answer 1 : +=",
				"Answer 2 : ->", "Answer 3 : sizeof",
				"Answer 4 : ++", 3, 10);
	q9.setValues("Question : What is the use of the new keyword in C++?", "Answer 1 : Declare variables",
				"Answer 2 : Define constants", "Answer 3 : Allocate memory dynamically",
				"Answer 4 : Free memory", 3, 10);
	q10.setValues("Question : Which of the following best describes C++?", "Answer 1 : C++ is a procedural programming language.",
				"Answer 2 : C++ is an object-oriented programming language.", "Answer 3 : C++ supports both procedural and object-oriented programming paradigms.",
				"Answer 4 : C++ is exclusively a functional programming language.", 3, 10);

	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();
	q5.askQuestion();
	q6.askQuestion();
	q7.askQuestion();
	q8.askQuestion();
	q9.askQuestion();
	q10.askQuestion();

	// Display the total score
	cout << "Total Score = " << Total
		<< "out of 100" << endl;

	// Display the results

	// If the player pass the quiz
	if (Total >= 70) {
		cout << "Congrats you passed the"
			<< " quiz!" << endl;
	}

	// Otherwise
	else {
		cout << "Alas! You failed the quiz."
			<< endl;
		cout << "Better luck next time."
			<< endl;
	}
	return 0;
}

// Function to set the values of
// the questions
void Question::setValues(
	string q, string a1,
	string a2, string a3,
	string a4, int ca, int pa)
{
	Question_Text = q;
	Answer_1 = a1;
	Answer_2 = a2;
	Answer_3 = a3;
	Answer_4 = a4;
	Correct_Answer = ca;
	Question_Score = pa;
}

// Function to ask questions
void Question::askQuestion()
{
	cout << endl;

	// Print the questions
	cout << Question_Text << endl;
	cout << Answer_1 << endl;
	cout << Answer_2 << endl;
	cout << Answer_3 << endl;
	cout << Answer_4 << endl;
	cout << endl;

	// Display the answer
	cout << "What is your answer?(in number)"
		<< endl;
	cin >> Guess;

	// If the answer is correct
	if (Guess == Correct_Answer) {
		cout << endl;
		cout << "Correct !" << endl;

		// Update the correct score
		Total = Total + Question_Score;
		cout << "Score = " << Question_Score
			<< " out of "
			<< Question_Score
			<< "!" << endl;
		cout << endl;
	}

	// Otherwise
	else {
		cout << endl;
		cout << "Wrong !" << endl;
		cout << "Score = 0"
			<< " out of "
			<< Question_Score
			<< "!" << endl;
		cout << "Correct answer = "
			<< Correct_Answer
			<< "." << endl;
		cout << endl;
	}
}
