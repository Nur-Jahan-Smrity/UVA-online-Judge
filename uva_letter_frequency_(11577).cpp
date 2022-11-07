//uva_11577_letter_frequency
#include <iostream>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <string.h>
#include <sstream>
#include <vector>
#include <queue>
using namespace::std;

int main(){
    int tes;
    cin >> tes;
    string s;
    getchar();
    while (tes--) {

        int frequency[123] = {0};
        getline(cin, s);
        //MARK: Step 1 .. Get all Alphabet

        string temp = "";

        for(int i = 0; i < s.size(); i++){
            if(isalpha(s[i])){ // if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122)
                temp += s[i];
            }
        }

       // cout<< temp << endl;

        // MARK: Step 2 All character small

        for(int i = 0; i < temp.size(); i++){

            if(isupper(temp[i])){
                temp[i] = temp[i] + 32;
            }

            frequency[temp[i]]++;
        }

        int mx = -1;

        for(int i = 97; i <= 122; i++){

            if(mx < frequency[i]){
                mx = frequency[i];
            }
        }


        for(int i = 97; i <= 122; i++){
            if(mx == frequency[i]){
                printf("%c", i);
            }
        }

        cout<<"\n";

    }

}
/*
Sample Input
1
Computers account for only 5% of the country’s commercial electricity consumption.
Sample Output
co
*/
