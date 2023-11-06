

// #include <bits/stdc++.h>
// using namespace std;

// void solution() {
//     string s, Ov, t, w;
//     cin >> s;

//     // Limit the input string to 60 characters if it's longer
//     if (s.length() > 60) {
//         s = s.substr(0, 60);
//     }

//     int P = 0, Z = 0;

//     for (int i = 0; i < s.length(); i++) {
//         if (s[i] == 'W') {
//             P++;
//             s[i] = '0';
//         }
//     }

//     for (char digit : s) {
//         if (isdigit(digit)) {
//             Z += digit - '0';
//         }
//     }

//     int X = s.length() / 6;
//     int Y = s.length() - X * 6;

//     if (X > 1) {
//         Ov = "Overs";
//     } else {
//         if (X >= 1 && Y >= 1) {
//             Ov = "Overs";
//         } else {
//             Ov = "Over";
//         }
//     }

//     if (Z <= 1) {
//         t = "Run";
//     } else {
//         t = "Runs";
//     }

//     if (P <= 1) {
//         w = "Wicket";
//     } else {
//         w = "Wickets";
//     }

//     cout << X << "." << Y << " " << Ov << " " << Z << " " << t << " " << P << " " << w << "." << endl;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         solution();
//     }
// }

#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;

        int overs = 0, balls = 0, runs = 0, wickets = 0;

        for (char ch : S) {
            if (ch == 'W') {
                wickets++;
                balls++;
            } else {
                int runsScored = ch - '0';
                balls++;
                runs += runsScored;
                if (balls % 6 == 0) {
                    overs++;
                    balls = 0;
                }
            }
        }

        string oversStr = to_string(overs);
        string ballsStr = to_string(balls);
        string runsStr = to_string(runs);
        string wicketsStr = to_string(wickets);

        string overUnit = (overs == 1) ? "Over" : "Overs";
        string ballUnit = (balls == 1) ? "Ball" : "Balls";
        string runUnit = (runs == 1) ? "Run" : "Runs";
        string wicketUnit = (wickets == 1) ? "Wicket" : "Wickets";

        cout << oversStr << "." << ballsStr << " " << overUnit << " " << runsStr << " " << runUnit << " " << wicketsStr << " " << wicketUnit << "." << endl;
    }

    return 0;
}