#include <string>
#include <set>
#include <map>
#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct City {
    long long economic;
    int days; // Number of days on the top
    string name;
} cities[10000 + 50000];

struct Person {
    long long money;
    City *location;
} persons[10000];

map<string, Person *> personMap; // Maps names into people
map<string, City *> cityMap; // Maps names into cities
set<pair<long long, City *>, greater<>> top_cities; // The cities ordered by economic

#define CITYMAP_CITY second
#define TOPCITIES_ECONOMIC first
#define TOPCITIES_CITY second

int main() {
    int n, m, k, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string name, location;
        long long money;
        cin >> name >> location >> money;
        personMap[name] = &persons[i];
        if (cityMap[location] == nullptr)
            cityMap[location] = &cities[c++];
        persons[i].location = cityMap[location];
        persons[i].money = money;
        cityMap[location]->name = location;
        cityMap[location]->economic += money;
    }
    for (auto &&citymap: cityMap)
        top_cities.insert(
                {citymap.CITYMAP_CITY->economic, citymap.CITYMAP_CITY});
    cin >> m >> k;
    int previous_day = 0, day;
    string name, place;
    for (int i = 0; i < k; i++) {
        cin >> day >> name >> place;
        if (day != previous_day) {
            auto city2 = top_cities.begin();
            auto city1 = city2++;
            if (city2 == top_cities.end() ||
                city1->TOPCITIES_ECONOMIC > city2->TOPCITIES_ECONOMIC)
                city1->TOPCITIES_CITY->days += day - previous_day;
        }
        if (cityMap[place] == nullptr) // New city found
        {
            cityMap[place] = &cities[c++];
            cityMap[place]->name = place;
        }
        // Update the set and the city data structure itself
        auto nextplace = cityMap[place];
        auto person = personMap[name];
        auto previous_place = person->location;
        auto previous_money = previous_place->economic;
        top_cities.erase({previous_money, previous_place});
        previous_place->economic -= person->money;
        top_cities.insert({previous_place->economic, previous_place});
        top_cities.erase({nextplace->economic, nextplace});
        nextplace->economic += person->money;
        top_cities.insert({nextplace->economic, nextplace});
        person->location = nextplace;
        previous_day = day;
    }
    if (m != previous_day) {
        auto city2 = top_cities.begin();
        auto city = city2++;
        if (city2 == top_cities.end() ||
            city->TOPCITIES_ECONOMIC > city2->TOPCITIES_ECONOMIC)
            city->TOPCITIES_CITY->days += m - previous_day;
    }
    vector<pair<string, int>> output;
    for (auto &topcity: top_cities)
        if (topcity.TOPCITIES_CITY->days)
            output.emplace_back(topcity.TOPCITIES_CITY->name,
                                topcity.TOPCITIES_CITY->days);
    sort(output.begin(), output.end());
    for (auto &out: output)
        cout << out.first << " " << out.second << "\n";
}