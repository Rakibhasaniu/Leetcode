/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function (init) {
  let totalcount = init;
  increment = () => {
    totalcount++;
    return totalcount;
  };
  decrement = () => {
    totalcount--;
    return totalcount;
  };

  reset = () => {
    totalcount = init;
    return totalcount;
  };
  return {
    increment,
    decrement,
    reset,
  };
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */
