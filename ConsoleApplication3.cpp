#include <iostream>
using namespace std;
class Worker

{
    int zarplata;
    string fio;
    int year;
public:
    Worker() { }

    int Set_a(int a1)//задаем 
    {
        zarplata = a1;
    }
    string fio(string fio1)
    {
        fio = fio1;
    }
    int Set_year(int year1)
    {
        if (year1 == 0)
            cout << "WTF" << endl;
        else
            year = year1;
    }


    ~Worker() { cout << "Destruct" << a << endl; }
    int get_a()
    {
        return a;
    }
    int Stazh()
    {
        return 2022 - year;
    }
    string Get_fio()
    {
        return fio;
    }
};
void x()
{
    cout << "x1";
}
void xx()
{
    cout << "x1,x2";
}


int main()
{
    int n;
    cout << "Введите кол-во сотрудников:" << endl;
    cin >> n;
    Worker* a = new Worker[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Введите год трудоустройства: " << endl;
        int god;
        cin >> god;
        a[i].Set_year(god);


    }
    int s;
    cout << "Введите стаж: ";
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (a[i].Stazh() > s)
            cout << a[i].Get_fio();//00xf253

    }
}



