class Solution {
public:
    string convert(string text, int rowsCount) {
        if (rowsCount == 1 || rowsCount >= text.length()) {
            return text;
        }

        vector<vector<char>> lines(rowsCount);
        int line = 0;
        int step = 1;

        for (char letter : text) {
            lines[line].push_back(letter);

            if (line == 0) {
                step = 1;
            } else if (line == rowsCount - 1) {
                step = -1;
            }

            line += step;
        }

        string finalString;
        for (auto& l : lines) {
            for (char ch : l) {
                finalString += ch;
            }
        }

        return finalString;
    }
};
