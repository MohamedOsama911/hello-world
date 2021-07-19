#include <iostream>
#include <string>
using namespace std;

class flight
{
private:
    int flight_num;
    int flight_seats;
    string flight_name;
    static int counter;

public:
    void setflightnum(int x)
    {
        flight_num = x;
    }
    int getflightnum()
    {
        return flight_num;
    }

    void setflightseats(int x)
    {
        flight_seats = x;
    }
    int getflightseats()
    {
        return flight_seats;
    }

    void setflightname(string st)
    {
        flight_name = st;
    }
    string getflightname()
    {
        return flight_name;
    }

    flight addclasses(flight f1, flight f2)
    {
        flight f3;
        f3.flight_num = f2.flight_num + f1.flight_num;
        f3.flight_seats = f2.flight_seats + f1.flight_seats;
        return f3;
    }

    static int calculator(int x, int y)
    {
        return x + y;
    }

    int getcounter()
    {
        return counter;
    }
    //parent class display function
    void display()
    {
        cout << "flight num: " << flight_num << endl;
        cout << "flight seats: " << flight_seats << endl;
        cout << "flight name: " << flight_name << endl;
    }

    flight() : flight_num(911), flight_seats(101)
    {
        counter++;
    }

    flight(int x, int y) : flight_num(x), flight_seats(y)
    {
    }

    ~flight()
    {
        counter--;
    }
};
int flight::counter = 0;

//vip class
class vip : public flight
{
private:
    int networth;
    int cars;

public:
    void setnetworth(int x)
    {
        networth = x;
    }
    int getnetworth()
    {
        return networth;
    }

    void setcars(int x)
    {
        cars = x;
    }
    int getcars()
    {
        return cars;
    }
    //VIP display function
    void display()
    {
        cout << endl;
        flight::display();
        cout << "MONEY = " << networth << "$$" << endl;
        cout << "cars = " << cars << endl;
    }

    vip() : flight()
    {
        networth = 1000000;
        cars = 10;
    }
};

//SPECIAL VIP class
class S_VIP : public vip
{
private:
    int numof_guards;
    int numof_S_cars;

public:
    //S_VIP display function
    void display()
    {
        cout << "\n----THIS IS SUPER VIP ---\n"
             << endl;
        vip::display();
        cout << "Number of guards :" << numof_guards << endl;
        cout << "Number of Secured cars :" << numof_S_cars << endl;
    }
    S_VIP() : vip()
    {
        numof_guards = 4;
        numof_S_cars = 2;
    }
};

int main()
{
    // flight f2(7, 18), f3;
    // int x, y;
    // cout << "Enter flight number,flight seats\n";
    // cin >> x >> y;
    // flight f1(x, y);
    // flight f2;
    //flight::calculator(5, 6);
    // f3 = f3.addclasses(f1, f2);
    // cout << "flight num= " << f3.getflightnum() << endl;
    // cout << "flight seats= " << f3.getflightseats() << endl;
    //  int x = 5, y = 911;
    //  cout << flight::calculator(x, y) << endl;
    flight f1;
    f1.display();
    vip v1;
    v1.display();
    S_VIP sv1;
    sv1.display();
    //  cout << f1.getcounter() << endl;
    // cout << f2.getcounter() << endl;
    //flight f3;
    //cout << f3.getcounter() << endl;
}
// cout << "Enter flight number,flight seats\n";
// cin >> x >> y;
// f1.setflightnum(x);
// f1.setflightseats(y);