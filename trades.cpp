#include<bits/stdc++.h>
using namespace std;


vector<vector<string>> read_csv(string filename)
{
    vector<vector<string>> data;
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        vector<string> row;
        string field;
        while (getline(ss, field, ',')) {
            row.push_back(field);
        }
        data.push_back(row);
    }
    file.close();
    return data;
}

int main()
{
    vector<vector<string>> data = read_csv("trades.csv");

    map<vector<string>,vector<int>> mapping;

    for(int i = 1; i<data.size(); i++) {
        vector<string> row = data[i];
        vector<string> rowmap = {row[2],row[3],row[4],row[5]};
        int quantity = stoi(row[6]);
        int values = stoi(row[7]);
        vector<int> rowval = {quantity,values};
        if(mapping.find(rowmap)!=mapping.end()) {
            mapping[rowmap][0]+= rowval[0];
            mapping[rowmap][1]+=rowval[1];
        } else {
            mapping.insert({rowmap,rowval});
        }
    }

    ofstream outfile("tradesagg.csv");
    for(auto a : mapping) {
        for(auto b : a.first)
            cout << b << ",";
        for(auto c : a.second)
            cout << c << ",";
        cout <<endl;
    } 
    for(auto a : mapping) {
        for(auto b : a.first)
            outfile << b << ",";
        for(auto c : a.second)
            outfile << c << ",";
        outfile <<endl;
    }
    outfile.close();
    return 0;
}
