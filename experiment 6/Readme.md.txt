There are two approaches --

first one for - NlogN complexity in which just sort the cost array and iterate a loop untill coins value greater than or equal to ith element of array and increase count in every iteration.

second one is using linear space which is a priority_queue as minimum pq already give a minimum element at top so we will subtract each time and put the count.