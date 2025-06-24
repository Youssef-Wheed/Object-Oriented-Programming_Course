#include <iostream>
using namespace std;

class Youtube
{
private:
    string name;
    int videos;
    int sub;

public:
    // Method to add channel details using the 1st method of encapsulation
    void add_channel(string n, int v, int s)
    {
        name = n;
        videos = v;
        sub = s;
    }
    // Method to display channel details
    void display_channel()
    {
        cout << "Channel Name: " << name << endl;
        cout << "Videos: " << videos << endl;
        cout << "Subscribers: " << sub << endl;
    }
};

int main()
{
    Youtube channel_1;
    channel_1.add_channel("Tech Insights", 150, 200000);
    channel_1.display_channel();

    return 0;
}   