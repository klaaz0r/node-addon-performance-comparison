# Node performance test

Calculating the fibonacci sequence with pure javascript and with C++ to compare the speed. Currently the C++ implementation is around 5 times faster than Javascript. 

## Running
```
> npm install
> npm start
```

Implementation in C++

```c
int fib(int n) {
    if(1 == n || 2 == n) {
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }
}
```

Implementation in javascript
```javascript
function fibonacci(n) {
  return n < 1 ? 0 : n <= 2 ? 1 : fibonacci(n - 1) + fibonacci(n - 2)
}
```

##TODO
*examples with nan
*heapdump
*multiple implementations with C++ and Javascript
