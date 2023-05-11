#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mr, md, lsb = 0, n = 8;
    cout << "\n\nEnter Multiplier (-127,127) : ";
    cin >> mr;
    cout << "Enter Multiplicand (-127,127) : ";
    cin >> md;

    bitset<8> pleft;
    bitset<8> pright(mr);
    bitset<8> mcand(md);

    cout << string(75, '_') << endl;
    cout << "| Iteraion | Steps                  |  Multiplicand  |  Product           |\n";
    cout << '|' << string(10, '_') << '|' << string(24, '_') << '|' << string(16, '_') << '|' << string(20, '_') << '|' << endl;
    int p0 = pleft[0], pl = pleft[4];
    for (int i = 0; i <= n; i++)
    {
        if (i == 0)
            cout << '|' << i << setw(10) << '|' << "Initial" << setw(18) << '|' << setw(16) << mcand << '|' << setw(8) << pleft << " " << setw(8) << pright << " " << lsb << setw(2) << '|' << endl;
        else
        {
            if (pright[0] == 0 && lsb == 0 || pright[0] == 1 && lsb == 1)
            {
                cout << '|' << i << setw(10) << '|' << pright[0] << lsb << ":"
                     << " No operation" << setw(9) << '|' << setw(16) << mcand << '|' << setw(8) << pleft << " " << setw(8) << pright << " " << lsb << setw(2) << '|' << endl;
            }
            else if (pright[0] == 0 && lsb == 1)
            {

                int carry = 0;
                for (int i = 0; i < n; i++)
                {
                    bitset<2> result(pleft[i] + mcand[i] + carry);
                    pleft[i] = result[0];
                    carry = result[1];
                }

                cout << '|' << i << setw(10) << '|' << pright[0] << lsb << ":"
                     << " Prod=Prod+Mcand" << setw(6) << '|' << setw(16) << mcand << '|' << setw(8) << pleft << " " << setw(8) << pright << " " << lsb << setw(2) << '|' << endl;
            }
            else
            {

                int carry = 0;
                for (int i = 0; i < n; i++)
                {
                    bitset<2> result(pleft[i] - (mcand[i] + carry));
                    pleft[i] = result[0];
                    carry = result[1];
                }

                cout << '|' << i << setw(10) << '|' << pright[0] << lsb << ":"
                     << " Prod=Prod-Mcand" << setw(6) << '|' << setw(16) << mcand << '|' << setw(8) << pleft << " " << setw(8) << pright << " " << lsb << setw(2) << '|' << endl;
            }
            // Arithmetic right shift
            pl = pleft[n - 1];
            p0 = pleft[0];
            lsb = pright[0];

            pright >>= 1;
            pright[n - 1] = p0;

            pleft >>= 1;
            pleft[n - 1] = pl;
        }
        if (i != 0)
            cout << '|' << string(10, ' ') << '|' << "  Arithmtic R. Shift    " << '|' << string(16, ' ') << '|' << setw(8) << pleft << ' ' << setw(8) << pright << ' ' << lsb << setw(2) << '|' << endl;

        cout << '|' << string(10, '_') << '|' << string(24, '_') << '|' << string(16, '_') << '|' << string(20, '_') << '|' << endl;
    }
    cout << "The product is : " << pleft << ' ' << pright << endl;

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int mr, md, lsb = 0, n = 32, pleft0, pleftn;
//     cout << "\n\nEnter Multiplier  : ";
//     cin >> mr;
//     cout << "Enter Multiplicand  : ";
//     cin >> md;
//     bitset<32> pleft, pright(mr), mcand(md);
//     for (int i = 1; i <= n; i++)
//     {
//         if (pright[0] == 0 && lsb == 1)
//         {
//             int carry = 0;
//             for (int i = 0; i < n; i++)
//             {
//                 bitset<2> result(pleft[i] + mcand[i] + carry);
//                 pleft[i] = result[0];
//                 carry = result[1];
//             }
//         }
//         else if (pright[0] == 1 && lsb == 0)
//         {
//             int carry = 0;
//             for (int i = 0; i < n; i++)
//             {
//                 bitset<2> result(pleft[i] - (mcand[i] + carry));
//                 pleft[i] = result[0];
//                 carry = result[1];
//             }
//         }
//         pleftn = pleft[n - 1];
//         pleft0 = pleft[0];
//         lsb = pright[0];
//         pright >>= 1;
//         pright[n - 1] = pleft0;
//         pleft >>= 1;
//         pleft[n - 1] = pleftn;
//     }
//     cout << "The product is : " << pleft << ' ' << pright << endl;
//     cout << "In decimal : " << pright.to_ulong() + pleft.to_ulong() * pow(2, n) << endl;
//     return 0;
// }