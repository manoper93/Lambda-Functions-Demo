#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

struct Product {
    int id;
    std::string name;
    double price;
    std::string category;
};

void printProduct(const Product& p) {
    std::cout << "  ID: " << p.id
              << ", Name: " << p.name
              << ", Price: $" << p.price
              << ", Category: " << p.category << std::endl;
}

int main() {
    std::vector<Product> products = {
        {102, "Gaming Mouse", 150.75, "Peripherals"},
        {205, "Mechanical Keyboard", 350.00, "Peripherals"},
        {301, "24-inch Monitor", 999.90, "Monitors"},
        {105, "7.1 Headset", 250.50, "Peripherals"},
        {402, "Gaming Chair", 1250.00, "Furniture"},
        {303, "Ultrawide Monitor", 1890.80, "Monitors"}
    };

    std::cout << "1. Original Product List:" << std::endl;
    std::for_each(products.begin(), products.end(), [](const Product& p) {
        printProduct(p);
    });

    std::cout << "\n2. Products Sorted by Price:" << std::endl;
    std::sort(products.begin(), products.end(), [](const Product& a, const Product& b) {
        return a.price < b.price;
    });
    std::for_each(products.begin(), products.end(), [](const Product& p) {
        printProduct(p);
    });

    std::cout << "\n3. Finding the first product in 'Monitors':" << std::endl;
    auto it = std::find_if(products.begin(), products.end(), [](const Product& p) {
        return p.category == "Monitors";
    });
    if (it != products.end()) {
        printProduct(*it);
    }

    std::cout << "\n4. Filtering for products with price > $500:" << std::endl;
    double priceLimit = 500.00;
    std::vector<Product> expensiveProducts;
    std::copy_if(products.begin(), products.end(), std::back_inserter(expensiveProducts),
        [priceLimit](const Product& p) {
            return p.price > priceLimit;
        });
    std::for_each(expensiveProducts.begin(), expensiveProducts.end(), [](const Product& p) {
        printProduct(p);
    });

    std::cout << "\n5. Filtering for products with price < $500:" << std::endl;
    double priceCeiling = 500.00;
    std::vector<Product> cheapProducts;
    std::copy_if(products.begin(), products.end(), std::back_inserter(cheapProducts),
        [priceCeiling](const Product& p) {
            return p.price < priceCeiling;
        });
    std::for_each(cheapProducts.begin(), cheapProducts.end(), [](const Product& p) {
        printProduct(p);
    });

    std::cout << "\n6. Calculating total stock value for 'Peripherals':" << std::endl;
    std::string targetCategory = "Peripherals";
    double categoryTotal = std::accumulate(products.begin(), products.end(), 0.0,
        [targetCategory](double sum, const Product& p) {
            return p.category == targetCategory ? sum + p.price : sum;
        });
    std::cout << "Total value for category '" << targetCategory << "': $" << categoryTotal << std::endl;

    return 0;
}
