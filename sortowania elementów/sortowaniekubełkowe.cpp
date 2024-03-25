#include <iostream>
#include <vector>
#include <algorithm>

void bucketSort(std::vector<int>& arr, int numBuckets) {
    // Create empty buckets
    std::vector<std::vector<int>> buckets(numBuckets);

    // Determine the range of input values
    int minValue = *std::min_element(arr.begin(), arr.end());
    int maxValue = *std::max_element(arr.begin(), arr.end());

    // Calculate the size of each bucket
    double bucketSize = static_cast<double>(maxValue - minValue + 1) / numBuckets;

    // Distribute the elements into buckets
    for (int i = 0; i < arr.size(); i++) {
        int bucketIndex = static_cast<int>((arr[i] - minValue) / bucketSize);
        buckets[bucketIndex].push_back(arr[i]);
    }

    // Sort each bucket and concatenate the sorted buckets
    int index = 0;
    for (int i = 0; i < numBuckets; i++) {
        std::sort(buckets[i].begin(), buckets[i].end());
        for (int j = 0; j < buckets[i].size(); j++) {
            arr[index++] = buckets[i][j];
        }
    }
}

int main() {
    std::vector<int> arr = {9, 5, 2, 8, 1, 10, 6, 3, 7, 4};
    int numBuckets = 5;

    std::cout << "Before sorting: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    bucketSort(arr, numBuckets);

    std::cout << "After sorting: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}