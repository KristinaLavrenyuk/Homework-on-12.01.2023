
#include <iostream>
using namespace std;

int main()
{
    char array[4][4]{};
    int answer = 0;
    int counterSquareW = 0;
    int counterSquareB = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> array[i][j];
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (array[i][j] == 'W' && j != 3 && i != 3)
            {
                if (array[i][j + 1] == 'W' && array[i + 1][j] == 'W' && array[i + 1][j + 1] == 'W')
                {
                    answer = 1;
                    break;
                }
            }
            else if (array[i][j] == 'B' && j != 3 && i != 3)
            {
                if (array[i][j + 1] == 'B' && array[i + 1][j] == 'B' && array[i + 1][j + 1] == 'B')
                {
                    answer = 1;
                    break;
                }
            }
        }
    }
    if (answer == 1) cout << "NO" << endl;
    else cout << "YES" << endl;

    system("pause");
}
