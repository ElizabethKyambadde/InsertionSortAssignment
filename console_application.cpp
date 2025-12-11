template <typename T, typename Compare>
void insertionSort(std::vector<T> &v, Compare comp) {
    for (size_t i = 1; i < v.size(); ++i) {
        T key = v[i];          // pick up the toy
        size_t j = i;
        while (j > 0 && comp(key, v[j - 1])) {
            v[j] = v[j - 1];   // move bigger toy right
            --j;
        }
        v[j] = key;            // put toy down
    }
}
