#include "std_lib_facilities.h"

void in_file_text(string& name_file, vector<string>& data);

int main()
{
    setlocale(LC_ALL, "Rus");
    string name_file;
    vector<string> data;
    cout << "Enter a file name for reading text:\n";
    cin >> name_file;
    in_file_text(name_file, data); 
    
    return 0;
}

void in_file_text(string& name_file, vector<string>& data)
{
    ifstream ist(name_file);
    if(!ist) error("Unable to open input file ", name_file);
    ist.exceptions(ist.exceptions() | ios_base::badbit);
    string temp_str;
    for(string temp_str; getline(ist, temp_str);)
    {
        data.push_back(temp_str);
    }
}
