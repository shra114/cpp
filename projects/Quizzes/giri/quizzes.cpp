#include <iostream>
#include <conio.h>
#include <fstream>
#include <vector>

using namespace std;

#define ASCII_SPACE        27
#define ASCII_ENTER        13
#define NUM_OF_QUESTIONS   20

struct QuesAns
{
    string question;
    string optA;
    string optB;
    string optC;
    string optD;
    char optAns;
    char correctAns;
};

int numQs;
QuesAns questions[20];

void printQuestionGetAns(int);
void loadQuestions();
void showAnswers();

int main()
{
    char in;
    int q = 0;

    loadQuestions();

    do
    {
        // Show question and get answer
        printQuestionGetAns(q++);

        // Wait until ENTER is pressed
        while(getch() != ASCII_ENTER);

        // Clear earlier question
        system("cls");
    } while((q < numQs) && (in != ASCII_SPACE));

    // Show all answers
    showAnswers();

    return 0;
}

void printQuestionGetAns(int q)
{
    if(q < numQs)
    {
        // Print question
        cout << "=======================" << endl;
        cout << " Q" << (q + 1) << "." << endl;
        cout << "  " << questions[q].question << endl;
        cout << "  A. " << questions[q].optA << endl;
        cout << "  B. " << questions[q].optB << endl;
        cout << "  C. " << questions[q].optC << endl;
        cout << "  D. " << questions[q].optD << endl;
        cout << " Enter your option: ";

        //cin >> questions[q].optAns;
        questions[q].optAns = cin.get();

        // Remove this - temporarily added to bypass ENTER
        char tmp;
        tmp = cin.get();

        if(questions[q].optAns == questions[q].correctAns)
        {
            cout << "Correct Answer" << endl;
        }
        else
        {
            cout << "Incorrect Answer!" << endl;
            cout << "Correct Answer is option " << questions[q].correctAns << endl;
        }

        cout << endl;
    }
    else
        cout << "Question out of bounds!!" << endl;
}

void loadQuestions()
{
    // Load questions and options from file
    string numQuestions;
    ifstream file("quiz.txt");

    getline(file, numQuestions);
    numQs = stoi(numQuestions);

    if(file.is_open() && numQs > 0)
    {
        for(int i=0; i<numQs; i++)
        {
            getline(file, questions[i].question);
            getline(file, questions[i].optA);
            getline(file, questions[i].optB);
            getline(file, questions[i].optC);
            getline(file, questions[i].optD);

            string tmp;
            getline(file, tmp);

            vector<char> v(tmp.begin(), tmp.end());
            questions[i].correctAns = v[0];
        }
    }
    else
        cout << "No Questions found" << endl;

    file.close();
}

void showAnswers()
{
    int score = 0;
    cout << endl << " =============== Results ===============" << endl;
    // Print all answers
    for(int i=0; i<numQs; i++)
    {
        if(questions[i].optAns == questions[i].correctAns)
            score++;
        cout << "    Question " << (i+1) << "  Opted: " << questions[i].optAns << " Correct: " << questions[i].correctAns << endl;
    }
    cout << endl << " Score is : " << score << "/" << numQs << endl << endl;
}
