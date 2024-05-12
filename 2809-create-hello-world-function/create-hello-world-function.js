/**
 * @return {Function}
 */
var createHelloWorld = function() {
    const STR = "Hello World";
    return function(...args) {
        return STR;
    }
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */