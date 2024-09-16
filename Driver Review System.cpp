#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

class RatingDriverSystem {
private:
    // Storing driver ratings
    std::unordered_map<std::string, std::vector<int>> DriverUserRatings;

public:
    // Function to add a rating for a driver
    void addRating(const std::string& DriverUsername, int rating) {
        if (rating < 0 || rating > 5) {
            std::cout << "Invalid rating. Rating must be between 0 and 5." << std::endl;
            return;
        }

        DriverUserRatings[DriverUsername].push_back(rating);
        std::cout << "Rating recieved!" << std::endl;
    }

    //  Calculate and display the average rating of a driver
    void displayAverageRating(const std::string& DriverUsername) const {
        auto it = DriverRatings.find(DriverUsername);
        if (it == DriverRatings.end() || it->second.empty()) {
            std::cout << "No ratings available for driver: " << DriverUsername << std::endl;
            return;
        }

        const std::vector<int>& ratings = it->second;
        int sum = 0;
        for (int DriverRatings : ratings) {
            sum += rating;
        }
        double average = static_cast<double>(sum) / ratings.size();

        std::cout << "Average rating for driver " << DriverUsername << " is " << average << std::endl;
    }
};

int main() {
    RatingDriverSystem RatingDriverSystem;
    int choice;
    std::string DriverUsername;
    int rating;

    while (true) {
        std::cout << "\n Carpool app Driver Review Menu:\n";
        std::cout << "1. Driver Review\n";
        std::cout << "2. Display Average Driver Score\n";
        std::cout << "3. Exit\n";
        std::cout << "Please input your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Please give driver's name: ";
                std::cin >> DriverUsername;
                std::cout << "Input your score (0 to 5): ";
                std::cin >> rating;
                ratingSystem.addRating(DriverUsername, rating);
                break;
            case 2:
                std::cout << "Enter Driver's name: ";
                std::cin >> DriverUsername;
                ratingSystem.displayAverageRating(DriverUsername);
                break;
            case 3:
                std::cout << "Exiting Driver Review.\n";
                return 0;
            default:
                std::cout << "Invalid value. Please input a value between 1 and 3\n";
        }
    }

    return 0;
}
