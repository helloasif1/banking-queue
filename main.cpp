#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <unistd.h>

using namespace std;


int main()
{
    cout<<"---------- Welcome To AB Bank ----------"<<endl;
    cout<<endl;
    string Name[30] =
    {
        "Asif",
        "Arif",
        "Joseph",
        "Messi",
        "Shahrukh",
        "Ronaldo",
        "Muntaqa",
        "Rahim",
        "Karim",
        "Sokhina",
        "Jorina",
        "Johnny",
        "Rahima",
        "Karima",
        "Kuddus",
        "Salman",
        "Anika",
        "Sabik",
        "Talha",
        "John",
        "Tapsi",
        "Sunny",
        "Happy",
        "Oyishi",
        "Sifat",
        "Sihab",
        "Mehedi",
        "Nazia",
        "Lamaya",
        "Lamia"
    };

    string acc_no[30] = {
        "0xxxxxx9877",
        "0xxxxxx8756",
        "0xxxxxx8745",
        "0xxxxxx7855",
        "0xxxxxx8577",
        "0xxxxxx9567",
        "0xxxxxx9999",
        "0xxxxxx1254",
        "0xxxxxx5656",
        "0xxxxxx9875",
        "0xxxxxx1234",
        "0xxxxxx4321",
        "0xxxxxx8888",
        "0xxxxxx1111",
        "0xxxxxx2222",
        "0xxxxxx3333",
        "0xxxxxx4444",
        "0xxxxxx5555",
        "0xxxxxx8686",
        "0xxxxxx8754",
        "0xxxxxx4578",
        "0xxxxxx8989",
        "0xxxxxx9898",
        "0xxxxxx5252",
        "0xxxxxx4525",
        "0xxxxxx6542",
        "0xxxxxx5423",
        "0xxxxxx5421",
        "0xxxxxx8912",
        "0xxxxxx8751",
    };



    srand(time(NULL));

    string customers[10];
    int c = 0;

    while (c != 30)
    {

        int inside_c = 10;

        if (inside_c == 10)
        {

            for (int i = 0; i <= 10; i++)
            {

                customers[i] = "Customer Name : " + Name[rand() % 30] + " account number: "+ acc_no[rand() % 30];
            }
            inside_c = 0;
        }



        while (inside_c != 10)
        {


            usleep(120000);



            cout << customers[inside_c] << " is about to leave the bank." << endl;


            cout << customers[inside_c] << " left the bank." << endl;
            inside_c++;
            c++;
            cout<<endl;
        }
        cout << "We already served " << c << " customers" << endl;
        cout<<endl;
        if(c < 30)
        {
            cout << endl << "ENTERING NEXT 10 CUSTOMERS" << endl << endl;
        }
    }


    cout << "Bank is closed now, " << c << " customers were served." << endl;
    cout<<endl;

    cout<<"---------- THANKS FOR BANKING WITH US ----------";

    return 0;
}

