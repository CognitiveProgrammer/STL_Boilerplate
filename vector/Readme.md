# std::vector - Sequence Container

_A sequence container preserves the insertion sequence of the elements into the container_

## Vector memory layout
_std::vector is stored as contiguous memory. unlike std::arrays, the memory is allocated from Heap_

## Creating Vector Container

__std::vector__ _requires following header file_
```
#include <vector>
```
__std::vector__ _takes two template arguments, the first being the type of the vector and second being the allocator. We always use default allocator and thats the reason we hardly provide second argument in vectors_

```
std::vector<int> vecFirst = {1,2,3,4,5};
std::vector<int> vecSecond { 1,2,3,4,5 };
```

_if we have to provide the allocator arguments to the vector, we can defined the vectors as_
```
std::vector<int, std::allocator<int>> vecFirst = {1,2,3,4,5};
// For user defined types
struct A { };
std::vector<A, std::allocator<A>> vecSecond { 1,2,3,4,5 };

```
_Unlike arrays, vectors are not of any fixed size but can grow and shrink dynamically. Post initialisation, we can add elements to vector container as_
```
vecFirst.push_back(6);
vecFirst.push_back(7);

```
_The vector can be accessed either by using C++11 for-loop or by using Iterator based for-loop_  
```
for (auto &val : vecFirst)
  std::cout<<val<<std::endl;

  // OR

for(std::vector<int>::iterator itr = vecSecond.begin(); itr != vecSecond.end(); itr++)
    std::cout<<*itr<<std::endl;

  // OR

for(std::vector<int>::iterator itr = vecSecond.begin(); itr != vecSecond.end(); itr++)
      std::cout<<*itr<<std::endl;

```
_Alternatively the array elements could also be accessed by subscript operator as well as by using .at(...) member function_

### Using subscript operator

```
std::cout << vecFirst[3] << std::endl;
```
_The subscript operator can also be used to update the values in a non-const arrays_

```
vecFirst[3] = 100;
```
### Using .at(array_index) function
```
std::cout << vecFirst.at(3) << std::endl;
```
_The .at(...) function can also be used to update the values in a non-const arrays_

```
vecFirst.at(3) = 300;
```

## Modifying the values in std::array

_Apart from_ ```[]``` _and_ ```.at(...)``` _the values can be modified in one go using_ ```.fill(...)``` _function. This function sets the uniform values in the array as passed in the function_
```
arrInit.fill(-45); // sets all elements of integer array as -45
```
_The array can also be swapped with another array of same size using_ ```.swap(...)``` _function_

```
arrInit2.swap(arrInit);

```
## Removing elements from an vector

_Elements from the vector can be removed using_ __Erase__ _function call and passing the iterator position on it. For example_
```
v.erase(v.begin());
v.erase(v.begin()+ 2);
v.erase(v.end() - 1);
```

_However, this approach is non optimal because every time the vector erases an element from the middle, it has to re-arrange all vectors so that they are contiguously aligned to the memory.

To overcome this, vectors are erases using_ __Erase Remove Idiom__

## Erase Remove Idiom

_A detailed description of Erase Remove Idiom is present here_

https://www.youtube.com/watch?v=pp5Hpo8duC8

_It's a short video which i'll recommend to see to understand how Erase Remove Idiom works. Its basically arranges the elements to be removed at the end and then removes them in one go to save the time. so here is how we use erase remove idiom in vectors_

_You need to include_ __<algorithm>__ _header file to use std::remove_

```
// This will remove all occurrences of '3' in the vector
 v.erase(remove(v.begin(), v.end(),3), v.end());
```
_To have a conditional remove, we can use remove_if with a lambda expression_

```
// This will remove all even numbers from the vector
v.erase(remove_if(v.begin(), v.end(),[](int & val){
    if( val % 2 == 0)
        return true;
    return false;
}), v.end());

```
