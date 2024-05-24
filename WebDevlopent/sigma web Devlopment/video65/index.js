
// for loop methord

var num = prompt("enter the number to find the factorial !!")
// let fact = 1;
// for (num; num >= 1; num--) {
//     fact = fact * num;
// }
// console.log(fact)

// reduce methord

let arr2 = [1, 2, 3, 4, 5, 6]

const red = ((a, b) => {
    var c = a * b;
    return c;
});

console.log(arr2.reduce(red))