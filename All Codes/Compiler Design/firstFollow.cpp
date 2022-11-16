#include <bits/stdc++.h>
using namespace std;

bool isCapital(char ch) {
  return ch >= 'A' && ch <= 'Z';
}

bool isSmall(char ch) {
  return ch >= 'a' && ch <= 'z';
}
set<char> nonTerminal, terminal;

map <char, vector<string>> production;

void insertProdcution(string prod) {
  production[prod[0]].push_back(prod.substr(3));
  nonTerminal.insert(prod[0]);
}
void takeInput() {
  //cout << "Instruction:\n1) Make the grammer unambigouse.\n2) Production must start from S->someting.\n3) Use the production rules as 'Non-Terminal' '->' 'production ruls'.\n";
  cout << "\nEnter the number of Production: ";
  int numberOfProduction;
  cin >> numberOfProduction;

  for (int i = 1; i <= numberOfProduction; i++) {
    string prod;
    cin >> prod;
    insertProdcution(prod);
  }
  // input perfectly taken
}
map <char, set<char>> first, follow;
set <char> isVisited;

void getFirst(char ch) {
      if (isVisited.count(ch))
          return;
      isVisited.insert(ch);  // check each production of ch
      for (string prod : production[ch]) {
            for (int i = 0; i < prod.size(); i++) {
              if (isCapital(prod[i])) {
                    getFirst(prod[i]);
                    for (char child : first[prod[i]])
                        first[ch].insert(child);
                    if (first[prod[i]].count('e'))
                        continue;
                    break;
              }
              else {
                    first[ch].insert(prod[i]);
                    break;
                }
            }
      }
}

void getFollow(char ch) {
  if (isVisited.count(ch))
    return;

  isVisited.insert(ch);

  for (char left : nonTerminal) {
    for (string prod : production[left]) {
      // check every production  to find ch

      int len = prod.size();
      bool isGet = false;
      for (int i = 0; i < len; i++) {
        if (isGet) {
          if (isCapital(prod[i])) {
            for (char x : first[prod[i]]) {
              follow[ch].insert(x);
            }

            if (first[prod[i]].count('e'))
              continue;
            else
              isGet = false;
          } else {
            follow[ch].insert(prod[i]);
            isGet = false;
          }
          continue;
        }
        if (prod[i] == ch) {
          isGet = true;
        }
      }
      if (isGet) {
        getFollow(left);
        for (int x : follow[left]) {
          follow[ch].insert(x);
        }
      }
    }
  }
  follow[ch].erase('e');
}
int main() {
    cout << "'e' is assign for epsilon.\nUse it for esilon\n";
    takeInput();
    for (char ch : nonTerminal) {
        if (isVisited.count(ch))
            continue;
        getFirst(ch);
    }
    cout << "First\n\n";
    for (char ch : nonTerminal) {
      cout << ch << " ->";
      for (char x : first[ch]) {
        cout << " " << x;
      }
      cout << endl;
    }
    isVisited.clear();

    follow['S'].insert('$');

    for (char ch : nonTerminal) {
      if (isVisited.count(ch))
        continue;
      getFollow(ch);
    }

    cout << "Follow\n\n\n";

    for (char ch : nonTerminal) {
      cout << ch << " ->";
      for (char x : follow[ch]) {
        cout << " " << x;
      }
      cout << endl;
    }
    return 0;
}
