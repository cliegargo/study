// https://www.codewars.com/kata/59a3f82749ae65de2c000050/train/cpp


#include <iostream>

std::string news_is_false(const std::string& news) {
    std::string abigail = "abigail";
    int count = 0;

    for(int i = 0; i < news.length() && count < abigail.length(); ++i) {
        if(news[i] == abigail[count]) {
            count += 1;
        }
    }

    return (count == abigail.length()) ? "YES" : "NO";
}

int main() {
    std::string news;

    std::cin >> news;
    std::cout << news_is_false(news) << std::endl;

    return 0;
}