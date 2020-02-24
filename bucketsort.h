//
// Created by Admin on 25.02.2020.
//

#ifndef BUCKETSORT_BUCKETSORT_H
#define BUCKETSORT_BUCKETSORT_H

#include <vector>
#include <list>

using bucketSortResult = std::vector<std::list<float>>;

bucketSortResult bucketSort(const std::vector<float> &, const float);
size_t maxCollision(const bucketSortResult &);

#endif //BUCKETSORT_BUCKETSORT_H
