// Advance JavaScript

async function sleep() {
    return new Promise(function (resolve, reject) {
        setTimeout(() => {
            resolve(45);
        }, 1000);
    })
}

function sum(a, b, c) {
    return a + b + c;
}
(async function main() {
    // let a = await sleep();
    // let b = await sleep();
    // console.log(a, b);

    // let [x, y, ...z] = [1, 3, 4, 5, 6, 7,]
    // console.log(x, y, z);

    let obj = {
        a: 1,
        b: 2,
        c: 3,
        d: 4,
    }
    let { a, b } = obj;
    console.log(a, b);
    let arr = [1, 3, 4]
    // console.log(arr[0] + arr[1] + arr[2])
    console.log(sum(...arr));

})();
