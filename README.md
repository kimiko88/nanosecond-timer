# nanosecond-timer

A simple C++ nodejs addon to monitor execution timing.

### Installing

A step by step series of examples that tell you how to get a development env running

Say what the step will be

```
npm i nanosecond-timer
```

### Example
 
```
const timer = require('nanosecond-timer')
timer.start();

// code

timer.end();
console.log(timer.diff() + " nanosec");
```
