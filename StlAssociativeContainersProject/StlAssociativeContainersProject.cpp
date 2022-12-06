#include <iostream>
#include <vector>
#include <utility>
#include <set>
#include <map>

using namespace std;

class User
{
    string name;
    int age;
public:
    User()
    {
        name = "";
        age = 0;
    }
    User(string name, int age) : name{ name }, age{ age } {}
    friend ostream& operator<<(ostream& out, const User& user)
    {
        out << "name: " << user.name << ", age: " << user.age;
        return out;
    }

    string Name() const
    {
        return name;
    }

    friend bool operator<(const User& a, const User& b)
    {
        return a.name < b.name;
    }
};

ostream& operator<<(ostream& out, const pair<string, int> p)
{
    out << "key: " << p.first << ", value: " << p.second << "\n";
    return out;
}

template <typename Iterator>
void printContainer(Iterator itBegin, Iterator ItEnd)
{
    for (auto it = itBegin; it != ItEnd; it++)
        cout << *it << " ";
    cout << "\n";
}

template <typename Iterator>
void printContainerEol(Iterator itBegin, Iterator ItEnd)
{
    for (auto it = itBegin; it != ItEnd; it++)
        cout << *it << "\n";
    cout << "\n";
}

int main()
{

    //vector<User> users;
    //users.push_back(User("Joe", 23));
    //users.push_back(User("Bob", 35));
    //users.push_back(User("Tim", 19));
    //users.push_back(User("Jim", 29));
    //users.push_back(User("Bill", 32));

    //for (int i = 0; i < users.size(); i++)
    //    cout << users[i] << "\n";
    //cout << "\n";

    //vector<pair<string, User>> usersKeys;
    //for (int i = 0; i < users.size(); i++)
    //{
    //    pair<string, User> user;
    //    user = make_pair(users[i].Name(), users[i]);
    //    usersKeys.push_back(user);
    //}
    //
    //for (auto it = usersKeys.begin(); it != usersKeys.end(); it++)
    //{
    //    cout << (*it).first << " ";
    //}
   /*
    set<int> s1;
    s1.insert(11);
    s1.insert(3);
    s1.insert(41);
    s1.insert(9);
    s1.insert(17);

    printContainer(s1.begin(), s1.end());

    s1.insert(4);
    
    cout << "\n";
    printContainer(s1.begin(), s1.end());

    set<User> usersSet;
    usersSet.insert(User("Joe", 23));
    usersSet.insert(User("Bob", 35));
    usersSet.insert(User("Tim", 19));
    usersSet.insert(User("Jim", 29));
    usersSet.insert(User("Bill", 32));
    cout << "\n";
    printContainerEol(usersSet.begin(), usersSet.end());
    
    usersSet.insert(User("Bill", 38));
    cout << "\n";
    printContainerEol(usersSet.begin(), usersSet.end());*/

    map<string, int> m1;
    m1.insert({"one", 1});
    m1.insert(make_pair("thousands", 1000));
    m1.insert(m1.begin(), {"nine", 9});

    //printContainer(m1.begin(), m1.end());

    //m1.insert({ "one", 7 });
    
    for (auto it = m1.begin(); it != m1.end(); it++)
    {
        auto key = it->first;
        auto value = m1[key];

        cout << "key: " << key << ", value: " << value << "\n";
    }

}
