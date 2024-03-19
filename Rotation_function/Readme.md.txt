Now the equation is : F[i+1] = F[i] + sum - n*x
Here x is first element of current rotation. And n is length of nums

Now, What will be our first F[i] and how to Implement the code.

As we can see we only need the first element of the current rotation. And the rotations are clock wise. We can start from last element and traverse back to first element as our starting rotation element.

====>

an, a1, a2, a3, a4 , ...., an-1 ==> first rotation
an-1, an, a1, a2, a3,....., an-2 ==> second rotation
.
.
.
a1, a2, a3, a4, a5, ....., an ==> last rotation

Observe the starting elements:

an, an-1, an-2,..... , a1
