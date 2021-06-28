#include <iostream>
#include<istream>
#include<fstream>
#include<vector>

using namespace std;

class pixel
{
    char R;
    char G;
    char B;
};

int main() {
    pixel P;
    string column_row;
    string column_str, row_str;
    int columns,rows;
    int flag = 0;
    ifstream f;
    f.open("C:\\Users\\PC\\CLionProjects\\na_emo\\new.txt");
    getline(f,column_row);

    for(int i = 0;i<column_row.size();++i)
    {
        if(column_row[i] != ' ')
        {
            column_str[i] = column_row[i];
        }
        else if(column_row[i] == ' ')
        {
            flag++;
            continue;
        }
        if(flag == 1)
        {
            static int n = 0;
            column_str[n] = column_row[i];
            n++;
        }
    }

    while(getline(f,column_row))
    {
        cout<<column_row<<endl;
    }


    cout<<columns<<" "<<rows<<endl;
}
