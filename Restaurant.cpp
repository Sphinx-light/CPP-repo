#include <iostream>
using namespace std;

class RestaurantTable
{
public:
    
    int tableNumber;
    int capacity;
    bool isOccupied;

    static int totalTables;

    
    RestaurantTable()
    {
        tableNumber = 0;
        capacity = 4;
        isOccupied = false;

        totalTables++;
    }

    void setTableDetails()
    {
        cout << "Enter table number: ";
        cin >> tableNumber;

        cout << "Enter capacity: ";
        cin >> capacity;

        cout << "Is the table occupied? (1 for Yes, 0 for No): ";
        cin >> isOccupied;
    }

    void displayTableDetails()
    {
        cout << "Table Number: " << tableNumber << endl;
        cout << "Capacity: " << capacity << endl;
        cout << "Occupied: " << (isOccupied ? "Yes" : "No") << endl;
    }

    static void displayTotalTables()
    {
        cout << "Total tables created: " << totalTables << endl;
    }
};

int RestaurantTable::totalTables = 0;

int main()
{
    RestaurantTable table1;
    RestaurantTable table2;
    RestaurantTable table3;

    cout << "Enter details for Table 1:" << endl;
    table1.setTableDetails();

    cout << "\nEnter details for Table 2:" << endl;
    table2.setTableDetails();

    cout << "\nEnter details for Table 3:" << endl;
    table3.setTableDetails();

    cout << "\n--- Table 1 ---" << endl;
    table1.displayTableDetails();

    cout << "\n--- Table 2 ---" << endl;
    table2.displayTableDetails();

    cout << "\n--- Table 3 ---" << endl;
    table3.displayTableDetails();

    cout << endl;
    RestaurantTable::displayTotalTables();

    return 0;
}