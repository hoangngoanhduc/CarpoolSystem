#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>

class RatingUserSystem {
private:
    // Storing user ratings
    std::unordered_map<std::string, std::vector<int>> UserRatings;

public:
    
    void addRating(const std::string& Username, int rating) {
        if (rating < 0 || rating > 5) {
            std::cout << "Invalid rating. Rating must be between 0 and 5." << std::endl;
            return;
        }

        UserRatings[Username].push_back(rating);
        std::cout << "Rating recieved!" << std::endl;
    }

   
    void displayAverageRating(const std::string& Username) const {
        auto it = Ratings.find(Username);
        if (it == Ratings.end() || it->second.empty()) {
            std::cout << "This is a new user: " << Username << std::endl;
            return;
        }

        const std::vector<int>& ratings = it->second;
        int sum = 0;
        for (int UserRatings : ratings) {
            sum += rating;
        }
        double average = static_cast<double>(sum) / ratings.size();

        std::cout << "Average rating for user " << Username << " is " << average << std::endl;
    }
};

int main() {
    RatingUserSystem RatingUserSystem;
    int choice;
    std::string Username;
    int rating;

    while (true) {
        std::cout << "\n Carpool app User Review Menu:\n";
        std::cout << "1. User Review\n";
        std::cout << "2. Display Average User Score\n";
        std::cout << "3. Exit\n";
        std::cout << "Please input your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Please give user's name: ";
                std::cin >> Username;
                std::cout << "Input your score (0 to 5): ";
                std::cin >> rating;
                ratingSystem.addRating(Username, rating);
                break;
            case 2:
                std::cout << "Enter User's name: ";
                std::cin >> Username;
                ratingSystem.displayAverageRating(Username);
                break;
            case 3:
                std::cout << "Exiting User Review.\n";
                return 0;
            default:
                std::cout << "Invalid value. Please input a value between 1 and 3\n";
        }
    }

    return 0;
}
