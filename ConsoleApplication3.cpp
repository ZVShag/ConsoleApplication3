#include <iostream>
using namespace std;

class Worker

{
    int zarplata;
    string fio;
    int year;
    string dolzhnost;

public:
    void Set_zarplata(int money)
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
    void Set_fio(string fio1)
    {
        fio = fio1;
    }
    void Set_dolznost(string dolzh)
    {
        dolzhnost=dolzh;
    }
    void Set_year(int year1)
    {
        if (year1 == 0)
            cout << "WTF" << endl;
        else
            year = year1;
    }
    string Get_fio()
    {
        return fio;
    }
    int Get_stazh()
    {
        return 2022 - year;
    }
    string Get_dolzhnost()
    {
        return dolzhnost;
    }
    int Get_zarplata()
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
            
            cout << "Введите ФИО сотрудника: " << endl;
            string fio;
            cin >>fio;
            shtat[i].Set_fio(fio);
            cout << "Введите год трудоустройства: " << endl;
            int god;
            cin >> god;
            shtat[i].Set_year(god);
            cout << "Введите должность сотрудника: " << endl;
            string dol;
            cin >> dol;
            shtat[i].Set_dolznost(dol);
            cout << "Введите зарплату: " << endl;
            int price;
            cin >> price;
            shtat[i].Set_zarplata(price);
            //реализуем объект класса worker и добавляем в массив shtat
        }
    }
    void Stariki(int stazh, int size)
    {

        for (int i = 0; i < size; i++)
        {
            if (this->shtat[i].Get_stazh() > stazh)
            {
                this->shtat[i].Get_fio();
            }
        }
    }
    
};


int main()
{
    setlocale(LC_ALL, "rus");
    int n;
    cout << "Введите кол-во сотрудников:" << endl;
    cin >> n;
    Shtat zavod(n);
}



