/**
 * @return {Generator<number>}
 */
// minimal variables count to memoize
var fibGenerator = function*() {
  let cnt = 0;
  let f1 = 0;
  let f2 = 1;
  let res = 0;
  while (true){
    if (cnt === 0) res = f1;
    if (cnt === 1) res = f2;
    if (cnt > 1){
        let t = f1 + f2;
        f1 = f2;
        f2 = t;
        res = f2;
    };
    yield res;
    cnt++;
  }  
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */