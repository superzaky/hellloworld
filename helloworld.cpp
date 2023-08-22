#include <iostream>
#include <vector>
#include <string>
#include "usb.cpp"
using namespace std;

// int main()
// {
//     vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

//     for (const string& word : msg)
//     {
//         cout << word << " ";
//     }
//     cout << endl;
// }

/**
 * {
    "cmake.environment": {
    "Importer_DIR": "/home/yomacho/Documents/importer"
    }
}
zet bovenstaande in je settings.json in vscode!
*/


int main(){
    std::string usbFolderPath = "/home/zh/Documents/dev2/Usb_gui/src/app/usb_files";
    std::string destinationFolderPath = "/home/zh/Documents/dev2/Usb_gui/src/app/upload";
    std::cout << "Hello, from gui!\n";

    USB usb(usbFolderPath, destinationFolderPath);
    std::vector<std::string> copiedFiles = usb.importDataFromFolder();
    //std::cout << "Copied files: " << copiedFiles << std::endl;

    for( auto const& string_vec : copiedFiles )
    for( auto const& s : string_vec )
        std::cout << s << std::endl;

}

