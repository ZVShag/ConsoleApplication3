#include <iostream>
using namespace std;
class Worker

{
    int zarplata;
    string fio;
    int year;
    string dolzhnost;

public:
    int Set_zarplata(int money)
    {
        if (money < 1)
        {
            money = 1;
        }
        else
        {
            zarplata = money;
        }
    }
    string Set_fio(string fio1)
    {
        fio = fio1;
    }
    string Set_dolznost(string dolzh)
    {
        dolzhnost=dolzh;
    }
    int Set_year(int year1)
    {
        if (year1 == 0)
            cout << "WTF" << endl;
        else
            year = year1;
    }
    int get_fio()
    {
        return fio;
    }
    int get_stazh()
    {
        return 2022 - year;
    }
    string Get_dolzhnost()
    {
        return dolzhnost;
    }
    int get_zarplata()
    {
        return zarplata;
    }
};
class Shtat
{
    Worker* shtat;
public:
    Shtat(int size)
    {
        shtat = new Worker[size];
        for (int i = 0; i < size; i++)
        {
            cout << "Введите год трудоустройства: " << endl;
            int god;
            cin >> god;
            shtat[i].Set_year(god);
            //реализуем объект класса worker и добавляем в массив shtat
        }
    }
    void Stariki(int stazh,int size)
    {
        for (i = 0; i < size; i++)
        {
            if (shtat[i].get_stazh > stazh)
            {
                shtat[i].get_fio;
            }
        }
    }

};


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



