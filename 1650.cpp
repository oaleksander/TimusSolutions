/* 1650. Billionaires - http://acm.timus.ru/problem.aspx?num=1650
 *
 * Strategy:
 * Maintain a set of the most money-dense cities. Every time a new day is given in the input, update
 * the score using the top values in the set as data.
 .
 * Performance:
 * O(k log k), runs the test ensemble in 0.39s using 10,480KB memory.
 */

#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

const int maxn = 10000, maxk = 50000;

struct City {
    long long money{};
    int days{}; // Number of days on the top
    string name;
} cities[maxn + maxk];

struct Person {
    string name;
    long long money{};
    City *location{};
} persons[maxn];

unordered_map<string, Person *> personMap; // Maps names into people
map<string, City *> cityMap; // Maps names into cities
set<pair<long long, City *>, greater<>> scoreBoard; // The cities ordered by money

int main() {
    int n, m, k, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name, location;
        long long money;
        cin >> name >> location >> money;
        personMap[name] = &persons[i];
        if (!cityMap[location])
            cityMap[location] = &cities[c++];
        persons[i].location = cityMap[location];
        persons[i].money = money;
        cityMap[location]->name = location;
        cityMap[location]->money += money;
    }
    for (auto &&cm: cityMap)
        scoreBoard.insert({cm.second->money, cm.second});
    cin >> m >> k;
    int previous_day = 0, day;
    string name, place;
    for (int i = 0; i < k; i++) {
        cin >> day >> name >> place;
        if (day != previous_day) {
            auto it2 = scoreBoard.begin();
            auto it = it2++;
            if (it2 == scoreBoard.end() || it->first > it2->first)
                it->second->days += day - previous_day;
        }

        if (!cityMap[place]) // New city mentioned
        {
            cityMap[place] = &cities[c++];
            cityMap[place]->name = place;
        }

        // Update the set and the city data structure itself
        auto nextplace = cityMap[place];
        auto person = personMap[name];
        auto previous_place = person->location;
        auto previous_money = previous_place->money;
        scoreBoard.erase({previous_money, previous_place});
        previous_place->money -= person->money;
        scoreBoard.insert({previous_place->money, previous_place});
        scoreBoard.erase({nextplace->money, nextplace});
        nextplace->money += person->money;
        scoreBoard.insert({nextplace->money, nextplace});
        person->location = nextplace;
        previous_day = day;
    }
    if (m != previous_day) {
        auto it2 = scoreBoard.begin();
        auto it = it2++;
        if (it2 == scoreBoard.end() || it->first > it2->first)
            it->second->days += m - previous_day;
    }
    vector<pair<string, int>> output;
    for (auto &sb: scoreBoard)
        if (sb.second->days)
            output.emplace_back(sb.second->name, sb.second->days);
    sort(output.begin(), output.end());
    for (auto &out: output)
        cout << out.first << " " << out.second << "\n";
}