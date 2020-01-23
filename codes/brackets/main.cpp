#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
string isBalanced(string s) {
    stack<char>br;
    for(int i=0;s[i]!='\0';i++){
        br.push(s[i]);
    }
    for(int i=br.begin();i!=br.end();i++){
        if((*i)=='{'  || (*i)=='[' || (*i)=='(')
            br.size()--;
    }
    if(br.empty())
        cout<<"YES\n";
    else
        cout<<"NO\n";

    }

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
