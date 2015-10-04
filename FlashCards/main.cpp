#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::cout << "こんにちは世界" << std::endl;

    
    std::string line;
    std::ifstream myfile("FlashCards.txt");
    
    if(myfile.is_open())
    {
        while(!myfile.eof())
        {
            getline(myfile, line);
            std::cout << line << std::endl;
        }
        myfile.close();
    }
    else
        std::cout << "Unable to open file" << std::endl;

    
    std::ofstream otherFile;
    otherFile.open("FlashCards.txt");
    otherFile.close();

    
    system("PAUSE");
    return 0;    
}
