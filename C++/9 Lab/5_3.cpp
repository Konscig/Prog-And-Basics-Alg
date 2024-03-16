#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ifstream input_file("input.txt");
    if (!input_file.is_open()) {
        cerr << "Failed to open input file!" << std::endl;
        return 1;
    }
    vector<string> lines;
    string line;
    while (getline(input_file, line)) {
        lines.push_back(line);
    }
    string search_query = lines.back();
    transform(search_query.begin(), search_query.end(), search_query.begin(), ::tolower);
    ofstream output_file("output.txt");
    if (!output_file.is_open()) {
        cerr << "Failed to open output file!" << endl;
        return 1;
    }
    for (size_t i = 0; i < lines.size() - 1; i++) {
        string title = lines[i];
        transform(title.begin(), title.end(), title.begin(), ::tolower);
        if (title.find(search_query) != string::npos) {
            output_file << lines[i] << endl;
        }
    }
    input_file.close();
    output_file.close();
    return 0;
}
