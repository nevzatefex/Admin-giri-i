#include <string>
#include <iostream>
#include <locale.h>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");
    string admin_username = "admin";
    string admin_password = "admin12";
    string pass;
    string username;
    string calisan_user = "efe";
    string calisan_pass = "123";
    int satis{};

    cout << "Kullanıcı adı " << endl;
    cin >> username;
    cout << "parola" << endl;
    cin >> pass;

    t:

    if (username == calisan_user && pass == calisan_pass)
    {
        s:
        cout << "Kullanici girisi yaptiniz" << endl;
        cout << "satış miktarı" << endl;
        cin >> satis;
    }
        else
        {
        cout << "kullanici adi veya şifre yanlis" << endl;
        }

    if (satis > 1)
    {
        cout << "Kullanıcı adı " << endl;
        cin >> username;
        cout << "parola" << endl;
        cin >> pass;
        if (username == calisan_user && pass == calisan_pass)
        {
            goto s;
        }
        
        if (username == admin_username && pass == admin_password && satis > 1)
        {
            cout << "admin girişi yaptınız" << endl;
            cout << satis << " Miktarda satıldı" << endl;
            if (satis < 50)
            {
                cout << "az satış yapıtınız" << endl;
            }
            if (satis>50<100)
            {
                cout << "ortalama satış yaptınız";
            }
            if (satis > 100)
            {
                cout << "yüksek satış yaptınız";
            }
        }
                 else
                    {
                     cout << "kullanici adi veya şifre yanlis" << endl;
                     }
    }
             else
            {
            cout << "satis 1'den az olamaz" << endl;
             goto t;
             }
    
   
    }

   
    
    

    

    


    
    
    
   

    
    

