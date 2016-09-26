#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iterator>


using namespace std;
int main()
{
    string str;
    vector<vector<string> > tree;
    cout << "Hello world!" << endl;
    ifstream ifs("./model.mdl", ios::text);
    copy(istream_iterator<unsigned char>(ifs),
         istream_iterator<unsigned char>(),
         back_inserter(str) );
    cout << str << endl;
    return 0;
}

