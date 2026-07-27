#include <iostream>
#include "json.hpp"
#include <limits>

using json = nlohmann::json;

int main() {
    json res;
    res["output"] = json::parse("[]");
    res["output"][0] = std::string{"aaaaa"};
    auto a = res.dump();
    auto b = json::parse(a);
    std::vector<double> arr = {232.22, std::numeric_limits<double>::infinity()};
    std::cout << arr[1] << std::endl;
    return 0;
    
}