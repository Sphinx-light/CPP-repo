#include <iostream>
using namespace std;

class HotelRoom{
    public:
    int roomNumber;
    string roomType;
    int pricePerNight;
    bool isBooked;

    static int totalRooms;

    HotelRoom(){
        roomNumber = 0;
        roomType = "Standard";
        pricePerNight = 2000;
        isBooked = false;

        totalRooms++;
    }

    void setRoomDetails(){
        cout<<"Enter room number: ";
        cin>>roomNumber;

        cout<<"Enter room type: ";
        cin>>roomType;

        cout<<"Is the room booked (1 for true : 0 for false): ";
        cin>>isBooked;

    }

    void displayRoomDetails(){
        cout<<"Room number: "<<roomNumber<<endl;
        cout<<"Room type: "<<roomType<<endl;
        cout<<"Price per night: "<<pricePerNight<<endl;
        cout<<"Booked: "<< (isBooked ? "Yes" : "NO") <<endl;
    }

    double calculateBill(int nights){
        double Total = pricePerNight * nights;
        return Total;
    }

    static void displayTotalRooms(){
        cout<<"Total number of rooms: "<<totalRooms<<endl;
    }

};

int HotelRoom::totalRooms = 0;

int main(){
    HotelRoom Room1;
    HotelRoom Room2;
    int nights;

    Room1.setRoomDetails();
    cout<<"\n";
    Room2.setRoomDetails();

    cout<<"\n";
    cout << "\n--- Room 1 ---" << endl;
    cout<<"\n";
    Room1.displayRoomDetails();

    cout<<"\n";
    cout << "\n--- Rooom 2 ---" << endl;
    Room2.displayRoomDetails();

    cout<<"\n";
    cout<<"Enter the number of nights: ";
    cin>>nights;

    cout<<"\n";
    
    cout << "Total bill for Room 1: " << Room1.calculateBill(nights) << endl;
    
    cout<<"\n";

    HotelRoom::displayTotalRooms();

}
