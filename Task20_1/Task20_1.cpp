#include <iostream>
#include<fstream>
#include<string>

int main()
{
    std::string date;
    std::string name;
    int sum = 0;
    std::cout << "Enter a name : ";
    std::getline(std::cin, name);
    bool ok;
    do
    {
        std::cout << "Date : ";
        std::cin >> date;
        int a = stoi(date.substr(0, 2));
        int b = stoi(date.substr(3, 2));
        int c = stoi(date.substr(6, 4));
        if (a > 31 || b > 12 || c>2025)
        {
            std::cout << "Error!!!!\n";
            ok = true;
        }
        else {
            ok = false;
        }
    } while (ok);
    std::cout << "Sum :";
    std::cin >> sum;
    std::ofstream text("statement.txt",std::ios::app);
    text <<name<<" "<<date<<" "<<sum<< std::endl;
    text.close();
}
