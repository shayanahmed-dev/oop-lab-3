#include <iostream>
using namespace std;

class SmartDevice
{
private:
    string deviceName;
    string deviceType;
    string status;

public:

    SmartDevice(string name, string type, string stat)
    {
        deviceName = name;
        deviceType = type;
        status = stat;

        cout << deviceName << " created successfully." << endl;
    }

    void display()
    {
        cout << "Device Name: " << deviceName << endl;
        cout << "Device Type: " << deviceType << endl;
        cout << "Status: " << status << endl;
        cout << "------------------------" << endl;
    }

    ~SmartDevice()
    {
        cout << deviceName << " is powering down... Goodbye " << endl;
    }
};

int main()
{
    SmartDevice d1("Smart Light", "Lighting", "ON");
    SmartDevice d2("Robo Vacuum", "Cleaning", "OFF");
    SmartDevice d3("Coffee Machine", "Kitchen", "ON");

    d1.display();
    d2.display();
    d3.display();

    return 0;
}
