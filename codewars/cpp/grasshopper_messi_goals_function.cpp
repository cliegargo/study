// https://www.codewars.com/kata/55f73be6e12baaa5900000d4/train/cpp


#include <iostream>
using namespace std;

int goals(int laLigaGoals, int copaDelReyGoals, int championsLeagueGoals) {
    return laLigaGoals + copaDelReyGoals + championsLeagueGoals;
}

int main() {
    int laLigaGoals, copaDelReyGoals, championsLeagueGoals;

    cin >> laLigaGoals >> copaDelReyGoals >> championsLeagueGoals;
    cout << goals(laLigaGoals, copaDelReyGoals, championsLeagueGoals) << endl;

    return 0;
}