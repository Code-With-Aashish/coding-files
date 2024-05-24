

let arr = [1, 2, 3, 4, 5, 6];
// console.log(arr);
// console.log(typeof arr)


arr[0] = 1234;

// console.log(arr.length)
// console.log(arr.toString());
// console.log(arr.join(""))
// console.log(arr.pop()) // niakl lo

// console.log(arr.push("Aashish")) // dal do 
// console.log(arr.shift())
// console.log(arr.unshift("Ashu"))

// console.log(delete arr[5])
// console.log(arr)
// console.log(a[6]);

// console.log(arr)

// unsift --> push
// shift --> pop

// console.log(arr[0]);
// console.log(arr[1]);
// console.log(arr[2]);
// console.log(arr[3]);
// console.log(arr[4]);
// console.log(arr[5]);
let ar1 = [5, 6, 7, 8, 9]
let ar2 = [1, 2, 3, 4]
let ar3 = [10, 11, 12, 13]
let arr4 = ar2.concat(ar1, ar3)
// console.log(arr4);

let arr8 = [9, 4, 6, 2, 7]
let arr6 = [9, 0, 4, 8]
// arr8.sort(); // modfy the original array
// arr8.compare(arr6);
// console.log(arr8)
arr8.splice(0, 2, 222, 333)
console.log(arr8)
arr6.reverse(); 
console.log(arr6)