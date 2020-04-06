#pragma once

#include <cstddef>
#include "CreateParcel.h"
#include <vector>
#include <array>
#include <algorithm>
#include <numeric>

template <typename E>
size_t bucket(const E& elem, size_t digit)
{
	return elem.size() > digit ? size_t(elem[digit]) + 1 : 0; // reserve 0 to mean we are at the end of this string
}
template <size_t R, typename C, typename P>
void radix_sort(P& position, const C& data, size_t digit)
{
	using Array = std::array<size_t, R + 1>; // type alias array
	Array count = {}; // number of times letter occour
	P previousPosition(position); // previousPositionious position

	for (auto i : previousPosition)
		++count[bucket(data[i], digit)];

	Array done = {}, offset = { {0} };
	partial_sum(count.begin(), count.end() - 1, offset.begin() + 1);
	for (auto i : previousPosition)
	{
		size_t b = bucket(data[i], digit);
		position[offset[b] + done[b]++] = i;
	}
}

template <size_t PossibleValues, typename C>
vector<size_t> radix_sort(const C& data)
{
	const int width = 4; // COULD USE A FUNCTION TO FIND THE WIDTH BUT WE KNOW ITS ALWAYS 4
	int end = 0;
	std::vector<size_t> position(data.size());
	//// compute increasing sequence 
	iota(position.begin(), position.end(), 0);
	// work from right to left
	for (long digit = long(width) - 1; digit >= end; --digit)
		radix_sort<PossibleValues>(position, data, size_t(digit));
		return position;
}


