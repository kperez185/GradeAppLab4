#include <iostream> 
#include <string> 
#include <iomanip> 
using namespace std;
int main()
{
    //Declaring my arrays 
    string names[5];
    double grades[5][6];
    cout << "Student Grade App\n";
    cout << "=================\n\n";
    //Entering the names and grades 
    for (int r = 0; r < 5; r++)
    {
        cout << "Enter Student Name ==> ";
        getline(cin, names[r]);
        for (int c = 0; c < 5; c++)
        {
            cout << "Enter grade # " << (c + 1) << " ==> ";
            cin >> grades[r][c];
        }
        cin.ignore();
        cout << "\n";
    }
    //Calculating the average for each student 
    for (int r = 0; r < 5; r++)
    {
        double total = 0;
        for (int c = 0; c < 5; c++)
        {
            total += grades[r][c];
        }
        grades[r][5] = total / 5;
    }
    //Printing the heading (extra credit) 
    cout << fixed << setprecision(2);
    cout << "Name\t\tGrade 1\tGrade 2\tGrade 3\tGrade 4\tGrade 5\tAverage\n";
    //Printing the names, grades, and averages 
    for (int r = 0; r < 5; r++)
    {
        cout << names[r] << "\t";
        for (int c = 0; c < 6; c++)
        {
            cout << grades[r][c] << "\t";
        }
        cout << "\n";
    }

}