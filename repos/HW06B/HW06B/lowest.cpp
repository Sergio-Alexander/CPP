#include <iostream>
using namespace std;

void getScore(int&);
void calcAverage(double, double, double, double, double);
int findLowest(int, int, int, int, int);

int main()
{
    int a, b, c, d, e;
    getScore(a);
    getScore(b);
    getScore(c);
    getScore(d);
    getScore(e);

    calcAverage(a, b, c, d, e);

    return 0;
}

void getScore(int& score)
{
    cout << "Enter a test score" << endl;
    cin >> score;
    
    while (score < 0 || score > 100)
    {
        cout << "The test score must be from 0-100" << endl;
        cout << "Try again:" << endl;
        cin >> score;
    }   
}

void calcAverage(double score1, double score2, double score3, double score4, double score5)
{
    double worst = findLowest(score1, score2, score3, score4, score5);
    double average = (score1 + score2 + score3 + score4 + score5 - worst) / 4;
    
    cout << "The average of the four highest scores is: " << average << endl;
}

int findLowest(int score1, int score2, int score3, int score4, int score5)
{
    int lowest = score1;

    if (lowest > score2)
        lowest = score2;
    if (lowest > score3)
        lowest = score3;
    if (lowest > score4)
        lowest = score4;
    if (lowest > score5)
        lowest = score5;

    return lowest;   
}