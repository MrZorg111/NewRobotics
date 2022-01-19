#include <iostream>
#include <vector>

    std::vector<int> change(std::vector<int> vec, int m) {
    std::vector<int> new_vec(vec.size() - 1);
    for (int i = 0, j = 0; i <= new_vec.size(); i++, j++) {
        if (i < m - 1) {
            new_vec[i] = vec[j];
         }
        else if (i >= m - 1) {
            j++;
            new_vec[i] = vec[j];
        }
    }

    return new_vec;
}

int main() {
    int n;
    std::cout << "Enter the serial number and the job position: \n";
    std::cin >> n;
    std::vector<int> vec(n);
    bool good = true;

    for (int i = 0; i < vec.size(); i++) {
        std::cout << "Enter the number of robots: \n";
        std::cin >> n;
        vec[i] = n;
    }
    for (int t = 0; t < vec.size(); t++) {
        std::cout << vec[t] << " ";
    }
    std::cout << "\n";

    for (int l = 0; l < vec.size(); l++) {
        int m;
        std::cout << "Enter the position of the purchased robot: \n";
        std::cin >> m;
        vec = change(vec, m);
        for ( int j = 0; j < vec.size(); j++) {
            std::cout << vec[j] << " ";
        }
        std::cout << "\n";
        if (vec.size() == 1) {
            std::cout << "There is only one variable left in the array, no further reduction is possible. \n";
            break;
        }
    }
    //std::cout << "The remaining variables in the array: \n";

}
