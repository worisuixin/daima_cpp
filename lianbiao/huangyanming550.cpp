#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    string id;
    string name;
    string gender;
    int score;
    Student() : id(""), name(""), gender(""), score(0) {}
    Student(string id, string name, string gender, int score)
    {
        this->id = id;
        this->name = name;
        this->gender = gender;
        this->score = score;
    }
    Student(const Student &s1)
    {
        this->id = s1.id;
        this->name = s1.name;
        this->gender = s1.gender;
        this->score = s1.score;
    }
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "Score: " << score << endl;
    }
};
void sort(Student arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i].score < arr[j].score)
            {
                Student temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void displayMale(Student arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i].gender == "Male")
        {
            arr[i].display();
        }
    }
}
int getAverageScore(Student arr[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i].score;
    }
    return sum / len;
}
int main()
{
    int len = 5;
    Student arr[len];
    for (int i = 0; i < len; i++)
    {
        string id, name, gender;
        int score;
        cout << "student" << i + 1 << "'s message:" << endl;
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Gender: ";
        cin >> gender;
        cout << "Score: ";
        cin >> score;
        arr[i] = Student(id, name, gender, score);
    }
    sort(arr, len);
    for (int i = 0; i < len; i++)
    {
        arr[i].display();
    }
    cout << "Male Students" << endl;
    displayMale(arr, len);
    cout << "Average Score" << endl;
    cout << getAverageScore(arr, len) << endl;
    return 0;
}