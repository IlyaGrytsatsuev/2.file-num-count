#include<iostream>
#include<fstream>
int main()
{
    std::ifstream input("/Users/gratchuvalsky/Desktop/data.txt");
    if (!input) {
        std::cout << "File Error" << std::endl;
        return 1;
    }
    int number,count(0);
    while(!input.eof())
    {
        input>>number;
        std::cout<<number<<" ";
        count++;
    }
    std::cout<<"\ncount: "<<count<<std::endl;
    return 0;
}

