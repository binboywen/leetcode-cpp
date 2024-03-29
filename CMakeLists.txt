cmake_minimum_required(VERSION 3.19)
project(leetcode-cpp)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_SOURCE_DIR}/include)
add_subdirectory(leetcode/leetcode/editor/cn/include)

add_subdirectory(leetcode/CPP)

add_executable(leetcode-cpp main.cpp)
add_executable(1-two-sum leetcode/leetcode/editor/cn/1-two-sum.cpp)
add_executable(4-median-of-two-sorted-arrays leetcode/leetcode/editor/cn/4-median-of-two-sorted-arrays.cpp)
add_executable(2-add-two-numbers leetcode/leetcode/editor/cn/2-add-two-numbers.cpp)
TARGET_LINK_LIBRARIES(2-add-two-numbers leetcode)
add_executable(3-longest-substring-without-repeating-characters leetcode/leetcode/editor/cn/3-longest-substring-without-repeating-characters.cpp)
add_executable(5-longest-palindromic-substring leetcode/leetcode/editor/cn/5-longest-palindromic-substring.cpp)
add_executable(6-zigzag-conversion leetcode/leetcode/editor/cn/6-zigzag-conversion.cpp)
add_executable(7-reverse-integer leetcode/leetcode/editor/cn/7-reverse-integer.cpp)
add_executable(8-string-to-integer-atoi leetcode/leetcode/editor/cn/8-string-to-integer-atoi.cpp)
add_executable(9-palindrome-number leetcode/leetcode/editor/cn/9-palindrome-number.cpp)
add_executable(test leetcode/CPP/test.cpp)
add_executable(10-regular-expression-matching leetcode/leetcode/editor/cn/10-regular-expression-matching.cpp)
add_executable(11-container-with-most-water leetcode/leetcode/editor/cn/11-container-with-most-water.cpp)
add_executable(12-integer-to-roman leetcode/leetcode/editor/cn/12-integer-to-roman.cpp)
add_executable(15-3sum leetcode/leetcode/editor/cn/15-3sum.cpp)
add_executable(16-3sum-closest leetcode/leetcode/editor/cn/16-3sum-closest.cpp)
add_executable(17-letter-combinations-of-a-phone-number leetcode/leetcode/editor/cn/17-letter-combinations-of-a-phone-number.cpp)
add_executable(18-4sum leetcode/leetcode/editor/cn/18-4sum.cpp)
add_executable(19-remove-nth-node-from-end-of-list leetcode/leetcode/editor/cn/19-remove-nth-node-from-end-of-list.cpp)
add_executable(21-merge-two-sorted-lists leetcode/leetcode/editor/cn/21-merge-two-sorted-lists.cpp)
add_executable(22-generate-parentheses leetcode/leetcode/editor/cn/22-generate-parentheses.cpp)
add_executable(23-merge-k-sorted-lists leetcode/leetcode/editor/cn/23-merge-k-sorted-lists.cpp)
add_executable(20-valid-parentheses leetcode/leetcode/editor/cn/20-valid-parentheses.cpp)
add_executable(24-swap-nodes-in-pairs leetcode/leetcode/editor/cn/24-swap-nodes-in-pairs.cpp)
add_executable(25-reverse-nodes-in-k-group leetcode/leetcode/editor/cn/25-reverse-nodes-in-k-group.cpp)
add_executable(887-super-egg-drop leetcode/leetcode/editor/cn/887-super-egg-drop.cpp)
add_executable(974-subarray-sums-divisible-by-k leetcode/leetcode/editor/cn/974-subarray-sums-divisible-by-k.cpp)
add_executable(1884-egg-drop-with-2-eggs-and-n-floors leetcode/leetcode/editor/cn/1884-egg-drop-with-2-eggs-and-n-floors.cpp)
add_executable(26-remove-duplicates-from-sorted-array leetcode/leetcode/editor/cn/26-remove-duplicates-from-sorted-array.cpp)
add_executable(quicksort leetcode/CPP/quicksort.cpp)
add_executable(mergeSort leetcode/CPP/mergeSort.cpp)
add_executable(heapSort leetcode/CPP/heapSort.cpp)
add_executable(topic3-23-04-16 leetcode/CPP/topic3-23-04-16.cpp)
add_executable(topic-23-04-16 leetcode/CPP/topic-23-04-16.cpp)
add_executable(topic2-23-04-16 leetcode/CPP/topic2-23-04-16.cpp)
add_executable(topic1-23-04-22 leetcode/CPP/topic1-23-04-22.cpp)

