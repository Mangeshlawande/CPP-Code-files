// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// #include<climits>
// #include<ctime>
// #include<deque>
// #include<set>
// #include<list>
// #include<map>
// #include<unordered_map>
// #include<unordered_set>

// using namespace std;



// /*

// vector  : -> stores a  list of products 
//     list  :-> contain orders 
//     deque : -> used for recent visits of customers
//     set(unique values) :-> unique categories product 
//     map(key- value pairs ) -> track stock count 
//     Multimap(key- value pairs ) -> allowing multiple order per customer
//     unordered_map(key- value pairs ) -> track customers Id 
//     unordered_set(key- value pairs ) ->     


// stores   
// container

// */

// struct Product
// {
//     int productID;
//     string name;
//     string category;

// };

// struct Order
// {
//     int orderID;
//     int productID;
//     int quantity;
//     string customerID;
//     time_t orderDate;
// };



// int main()
// {
     
//      vector<Product> products = {
//             {101, "Laptop","Electronic" },
//             {102, "SmartPhone","Electronic"},
//             {103, "Coffee Maker","Kitchen"},
//             {104, "Roti Maker","Kitchen"},
//             {105, "Blender","Kitchen"},
//             {106, "Desk Lamp","Home"}
//         };

//         deque<string> recentCustomers ={"C001", "C002", "C003", "C004" };
//         recentCustomers.push_back("C006");
//         recentCustomers.push_back("C007");

//         // place customer orders
//         list<Order> orderHistory;
//         orderHistory.push_back({1, 101,1,"C001", time(0)});
//         orderHistory.push_back({2, 102,2,"C002", time(0)});
//         orderHistory.push_back({3, 103,1,"C003", time(0)});
//         orderHistory.push_back({4, 104,3,"C004", time(0)});


//         // find categories;
//         set<string> categories;
//         for (const auto &product: products){
//             categories.insert(product.category);
//         }
        

//         map <int, int >productStock = { 
//             {101,10},
//             {102,9},
//             {103,12},
//             {104,11},
//             {105,7},
//             {106,2}
//         };

//     multimap<string, Order> customerOrders;
//         for(const auto &Order : orderHistory ){
//             customerOrders.insert({Order.customerID,Order});
//         }
// //high efficiency , fast access, use hash table: direct use element
// // map bin-search
//     unordered_map<string, string> customerData = {
//         {"C001", "Minato"},
//         {"C002", "Madara"},
//         {"C003", "Saitama"},
//         {"C004", "Itachi"},
//         {"C005", "Kakashi"},
//         {"C006", "Neji"}
//     };
//     unordered_set<int> uniqueProductIDs;

//     for(const auto & product : products){
//       uniqueProductIDs.insert(product.productID);
//     }

//     return 0;
// };

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
#include <ctime>
#include <deque>
#include <set>
#include <list>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;

struct Product {
    int productID;
    string name;
    string category;
};

struct Order {
    int orderID;
    int productID;
    int quantity;
    string customerID;
    time_t orderDate;
};

void printProducts(const vector<Product>& products) {
    cout << "Products:\n";
    for (const auto& product : products) {
        cout << "ProductID: " << product.productID
             << ", Name: " << product.name
             << ", Category: " << product.category << '\n';
    }
    cout << '\n';
}

void printRecentCustomers(const deque<string>& recentCustomers) {
    cout << "Recent Customers:\n";
    for (const auto& customer : recentCustomers) {
        cout << customer << '\n';
    }
    cout << '\n';
}

void printOrderHistory(const list<Order>& orderHistory) {
    cout << "Order History:\n";
    for (const auto& order : orderHistory) {
        cout << "OrderID: " << order.orderID
             << ", ProductID: " << order.productID
             << ", Quantity: " << order.quantity
             << ", CustomerID: " << order.customerID
             << ", OrderDate: " << ctime(&order.orderDate);
    }
    cout << '\n';
}

void printCategories(const set<string>& categories) {
    cout << "Product Categories:\n";
    for (const auto& category : categories) {
        cout << category << '\n';
    }
    cout << '\n';
}

void printProductStock(const map<int, int>& productStock) {
    cout << "Product Stock:\n";
    for (const auto& stock : productStock) {
        cout << "ProductID: " << stock.first
             << ", Stock: " << stock.second << '\n';
    }
    cout << '\n';
}

void printCustomerOrders(const multimap<string, Order>& customerOrders) {
    cout << "Customer Orders:\n";
    for (const auto& pair : customerOrders) {
        const auto& order = pair.second;
        cout << "CustomerID: " << pair.first
             << ", OrderID: " << order.orderID
             << ", ProductID: " << order.productID
             << ", Quantity: " << order.quantity
             << ", OrderDate: " << ctime(&order.orderDate);
    }
    cout << '\n';
}

void printCustomerData(const unordered_map<string, string>& customerData) {
    cout << "Customer Data:\n";
    for (const auto& data : customerData) {
        cout << "CustomerID: " << data.first
             << ", Name: " << data.second << '\n';
    }
    cout << '\n';
}

void printUniqueProductIDs(const unordered_set<int>& uniqueProductIDs) {
    cout << "Unique Product IDs:\n";
    for (const auto& id : uniqueProductIDs) {
        cout << id << '\n';
    }
    cout << '\n';
}

int main() {
    vector<Product> products = {
        {101, "Laptop", "Electronic"},
        {102, "SmartPhone", "Electronic"},
        {103, "Coffee Maker", "Kitchen"},
        {104, "Roti Maker", "Kitchen"},
        {105, "Blender", "Kitchen"},
        {106, "Desk Lamp", "Home"}
    };

    deque<string> recentCustomers = {"C001", "C002", "C003", "C004"};
    recentCustomers.push_back("C006");
    recentCustomers.push_back("C007");

    list<Order> orderHistory;
    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});
    orderHistory.push_back({4, 104, 3, "C004", time(0)});

    set<string> categories;
    for (const auto& product : products) {
        categories.insert(product.category);
    }

    map<int, int> productStock = {
        {101, 10}, {102, 9}, {103, 12}, {104, 11}, {105, 7}, {106, 2}
    };

    multimap<string, Order> customerOrders;
    for (const auto& order : orderHistory) {
        customerOrders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerData = {
        {"C001", "Minato"},
        {"C002", "Madara"},
        {"C003", "Saitama"},
        {"C004", "Itachi"},
        {"C005", "Kakashi"},
        {"C006", "Neji"}
    };

    unordered_set<int> uniqueProductIDs;
    for (const auto& product : products) {
        uniqueProductIDs.insert(product.productID);
    }

    printProducts(products);
    printRecentCustomers(recentCustomers);
    printOrderHistory(orderHistory);
    printCategories(categories);
    printProductStock(productStock);
    printCustomerOrders(customerOrders);
    printCustomerData(customerData);
    printUniqueProductIDs(uniqueProductIDs);

    return 0;
}
