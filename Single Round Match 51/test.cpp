#include<iostream>
#include<string>
using namespace std;
class Clock{
    public:
        int H,M,S;
    public:
    void SetTime(int h,int m,int s)
    {
        H =h,M = m,S =s;
    }
    void ShowTime()
    {
        cout <<H<<":"<<M<<":"<<S<<endl;
    }
    Clock(int h = 0,int m = 0,int s = 0)
    {
        H =h,M = m,S =s;
    }
    Clock(Clock &p)
    {
        H = p.H,M = p.M,S = p.S;
    }
    ~Clock()
    {
        cout<<"bye-bye"<<endl;
    }
    void TimeAdd(Clock *Cp);
    void TimeAdd(int h, int m, int s);
    void TimeAdd(int s);
};
void Clock::TimeAdd(Clock *Cp)
{
    H = (Cp->H + H + (Cp->M + M + (Cp->S + S)/60)/60) % 24;
    M = (Cp->M + M + (Cp->S + S)/60)%60;
    S = (Cp->S + S)%60;
}
void Clock::TimeAdd(int s)
{
    H = (H + H + (M + M + (S + S)/60)/60) % 24;
    M = (M + M + (S + S)/60)%60;
    S = (S + S)%60;
}
void Clock::TimeAdd(int h,int m,int s)
{
    H = (h + H + (m + M + (s + S)/60)/60) % 24;
    M = (m + M + (s + S)/60)%60;
    S = (s + S)%60;
}
void set(int& a)
{
    a = 10;
}
int main()
{

    Clock *p;
    p = new Clock(1,2,3);
    p->ShowTime();
    delete p;

    return 0;
}
