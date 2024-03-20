#ifndef BAG_OF_HOLDING_H
#define BAG_OF_HOLDING_H

#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

template<typename T>
class BagOfHolding {
private:
    std::vector<T> items;

public:
    BagOfHolding() {
        // Initialize random seed
        std::srand(std::time(nullptr));
    }

    void addItem(const T& item) {
        items.push_back(item);
    }

    T extractItem(const T& item) {
        auto it = std::find(items.begin(), items.end(), item);
        if (it != items.end()) {
            T extractedItem = *it;
            items.erase(it);
            return extractedItem;
        } else {
            // If the item is not in the bag, return a default-constructed object
            return T();
        }
    }

    T extractRandomItem() {
        if (items.empty()) {
            return T(); // Return default-constructed object if bag is empty
        }
        int randomIndex = std::rand() % items.size();
        T randomItem = items.at(randomIndex);
        items.erase(items.begin() + randomIndex);
        return randomItem;
    }
};

#endif // BAG_OF_HOLDING_H
