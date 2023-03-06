#include <iostream>
#include <string>

int main() {
    std::cout << "Welcome to the Happiness Calculator!" << std::endl;
    std::cout << "Please answer the following questions on a scale of 1 to 10:" << std::endl;
    
    // Get user input for different factors affecting happiness
    int satisfaction, relationships, career, health, finance;
    std::cout << "How satisfied are you with your life overall? ";
    std::cin >> satisfaction;
    std::cout << "How satisfied are you with your relationships? ";
    std::cin >> relationships;
    std::cout << "How satisfied are you with your career? ";
    std::cin >> career;
    std::cout << "How satisfied are you with your health? ";
    std::cin >> health;
    std::cout << "How satisfied are you with your finances? ";
    std::cin >> finance;
    
    // Calculate average happiness score
    int average = (satisfaction + relationships + career + health + finance) / 5;
    
    // Determine overall happiness level based on average score
    std::string happinessLevel;
    if (average >= 8) {
        happinessLevel = "very happy";
    } else if (average >= 6) {
        happinessLevel = "happy";
    } else if (average >= 4) {
        happinessLevel = "somewhat happy";
    } else if (average >= 2) {
        happinessLevel = "unhappy";
    } else {
        happinessLevel = "very unhappy";
    }
    
    // Output happiness level
    std::cout << std::endl;
    std::cout << "Your average happiness score is " << average << "." << std::endl;
    std::cout << "Based on your responses, you are " << happinessLevel << "." << std::endl;
    
    return 0;
}
