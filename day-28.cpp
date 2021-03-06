#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



int main()
{
    int N, i;

    cin >> N;

    regex exp(".+@gmail\\.com$");

    vector<string> strarray;

    for(i = 0; i < N; i++)
 {
        string Fname;

        string Eid;

        cin >> Fname >> Eid;

        if(regex_match(Eid, exp))
 {
            strarray.push_back(Fname);
        }
    }

    sort(strarray.begin(), strarray.end()); 

    for(i = 0; i < strarray.size();i++) 
    { 
        cout << strarray[i] << endl; 
    }

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
