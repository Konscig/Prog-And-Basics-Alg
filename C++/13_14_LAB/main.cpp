#include <iostream>
#include <string>
#include <utility>

using namespace std;

class Test {
protected:
    string subject;
    int questions;
    int time;
public:
    Test(string subj, int quest, int t) {
        subject = std::move(subj);
        questions = quest;
        time = t;
    }
    virtual void printInfo() {
        cout << "Subject: " << subject << endl;
        cout << "Number of questions: " << questions << endl;
        cout << "Time limit: " << time << " minutes" << endl;
    }
};

class Exam : public Test {
private:
    int difficulty;
public:
    Exam(string subj, int quest, int t, int diff) : Test(std::move(subj), quest, t) {
        difficulty = diff;
    }
    void printInfo() override {
        cout << "Exam information: " << endl;
        Test::printInfo();
        cout << "Difficulty level: " << difficulty << endl;
    }
};

class FinalExam : public Exam {
private:
    bool isOral;
public:
    FinalExam(string subj, int quest, int t, int diff, bool oral) : Exam(std::move(subj), quest, t, diff) {
        isOral = oral;
    }
    void printInfo() override {
        cout << "Final Exam information: " << endl;
        Exam::printInfo();
        if (isOral) {
            cout << "Oral Exam" << endl;
        }
        else {
            cout << "Written Exam" << endl;
        }
    }
};

int main() {
    Test* test = new Test("Mathematics", 50, 120);
    Exam* exam = new Exam("Physics", 100, 180, 3);
    auto* finalExam = new FinalExam("Computer Science", 150, 240, 4, true);

    test->printInfo();
    cout << endl;
    exam->printInfo();
    cout << endl;
    finalExam->printInfo();
}
