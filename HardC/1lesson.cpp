#include <iostream>
#include <vector>
#include <tuple>
#include <utility>
#include <string>

using namespace std;

class Time 
{
    private:
        int hour, minute, second;
    public:
        Time() : hour(0), minute(0), second(0) {}
        Time(int h, int m, int s) : hour(h), minute(m), second(s) {}
        friend bool operator< (const Time& t1, const Time& t2);
};
//bool operator<(const Time& t1, const Time& t2)
//{
//    if (t1.hour != t2.hour)
//   {
//        return t1.hour < t2.hour;
//    }
//    if (t1.minute != t2.minute)
//    {
//        return t1.minute < t2.minute;
//    }
//   return t1.second < t2.second;
//}
bool operator<(const Time& t1, const Time& t2)
{
   return tie(t1.hour, t1.minute, t1.second) < tie(t2.hour, t2.minute, t2.second);
}

int main()
{
    {
    Time breakfast_time(9, 15, 0);
    Time lunch_time(13, 0, 0);
    cout << boolalpha << (breakfast_time < lunch_time) << endl;

    tuple<int, double, string> T1(10, 2.5, "Hello");
        tuple<int, double, string> T2(10, 2.5, "Hello");

     cout << boolalpha << (T1 == T2) << endl;
    };


    return 0;
}