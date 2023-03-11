#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;


// Pascal Convention

struct Movie {
    string title;
    int releaseYear;
};

struct Customer {
    int id;
    string name;
    string email;
};

int main() {
    Customer customer;

    cout << "Name: ";
    cin >> customer.name;

    cout << "Email: ";
    cin >> customer.email;

    customer.id = (int) time(nullptr);

    cout << left;
    cout << setw(10) << "ID: " << customer.id << endl;
    cout << setw(10) << "Name: " << customer.name << endl;
    cout << setw(10) << "Email: " << customer.email << endl;


    return 0;
}

