#include <iostream>
#include <vector>

using namespace std;

class EliminationGame {
private:
    int n; // Total number of people
 int step; // Step size for elimination (e.g., 3 for every third person)
    vector<int> people; // Vector to hold people

public:
    EliminationGame(int n, int step) : n(n), step(step) {
        // Initialize the vector with people numbered from 1 to n
        for (int i = 0; i < n; ++i) {
            people.push_back(i + 1);
        }
    }

    int play() {
        int index = 0; // Start counting from the first person

        // Continue until only one person remains
        while (people.size() > 1) {
            // Calculate the index of the person to eliminate
            index = (index + step - 1) % people.size(); // (index + step - 1) because we count the current person + (step - 1) more
            int eliminatedPerson = people[index]; // Store the eliminated person
            people.erase(people.begin() + index); // Eliminate the person

            // Display the eliminated person
            cout << "Eliminated person: " << eliminatedPerson << endl;
        }

        // Return the last remaining person's number
        return people[0];
    }
};

int main() {
    int n = 43; // Total number of people
    int step = 3; // Step size for elimination (e.g., 3 for every third person)

    EliminationGame game(n, step);
    int lastPerson = game.play();

    cout << "The last remaining person is: " << lastPerson << endl;

    return 0;
}