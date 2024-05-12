/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    this.state = n;
    // closure
    return function() {
        let res = this.state;
        this.state++;
        return res;
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */