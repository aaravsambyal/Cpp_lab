#include <iostream>
using namespace std;

class Flight
{
public:
    int flightNo;
    string source;
    string destination;
    int seatsAvailable;

    void getData()
    {
        cin >> flightNo >> source >> destination >> seatsAvailable;
    }
};

int main()
{
    int n;
    cin >> n;

    Flight *flights = new Flight[n];

    for (int i = 0; i < n; i++)
    {
        flights[i].getData();
    }

    string dest;
    cin >> dest;

    for (int i = 0; i < n; i++)
    {
        if (flights[i].destination == dest)
        {
            cout << flights[i].flightNo << endl;
        }
    }

    delete[] flights;
    return 0;
}