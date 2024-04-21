#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
     /*   unordered_map<string, int> umap;
        umap["nithin"] = 10;
        umap["narendhar"] = 20;
        umap["narahari"] = 30; */

     unordered_map<string, int> umap = {
     {"nithin",10},
     {"narendhar",20},
     {"narahari",30},
       };

    for (auto x : umap)
        cout << x.first << " " << x.second << "\n";

    return 0;
}