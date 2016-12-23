#ifndef HOTELROOM_H_INCLUDED
#define HOTELROOM_H_INCLUDED

#include <iostream>
#include <cmath>
using namespace std;

class HotelRoom
{
private:
    int room;
    int comfort;
public:
    HotelRoom (const int comfort_ = 3, const int people = 2)
    {
        if (comfort_ > 3 || comfort_ < 1)
            return 1;
        if (!isPeopleOK(people))
            return 1;
        comfort = comfort_;
        room = round(people/2);
    }
    ~HotelRoom ()
    {
        cout << endl << "Comfort = " << comfort << endl << "Rooms = " << room
        << "Price = " << 2*rooms * (4-comfort) * 1000 << endl << "RIP HotelRoom" << endl;
    }

    int getRoom () const
    {
        return room;
    }
    void setRoom (const int people_)
    {
        room = round (people/2);
    }
    int getComfort () const
    {
        return comfort;
    }
    void setComfort (const int comfort_)
    {
        comfort = comfort_;
    }

    bool isPriceOK (const int min_, const int max_)
    {
        int price = 2*rooms * (4-comfort) * 1000;
        if (price > min_ && price < max_)
        {
            return 1;
        } else
            return 0;
    }
    bool isPeopleOK (const int people)
    {
        if (people > room*2)
        {
            return 1;
        } else
            return 0;
    }

    void print () const
    {
        cout << endl << "Comfort = " << comfort << endl << "Rooms = " << room
        << "Price = " << 2*rooms * (4-comfort) * 1000 << endl;
    }
};

#endif // HOTELROOM_H_INCLUDED
