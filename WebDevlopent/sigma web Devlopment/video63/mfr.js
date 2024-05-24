let arr = [1, 3, 5, 6, 8, 100];
// let newArr = [];

// for (let index = 0; index < arr.length; index++) {
//     const element = arr[index];
//     newArr.push(element ** 2);
// }

// console.log(newArr);


let newArr = arr.map((e) => {
    return e ** 2;
})

console.log(newArr);

const GraterThanSeven = (e) => {
    if (e > 9) {
        return true;
    }
    else {
        return false;
    }

}

console.log(arr.filter(GraterThanSeven));

let arr2 = [1, 2, 3, 4, 5, 6, 7, 8, 9,]

const red = ((a, b) => {
    return a + b;
});

console.log(arr2.reduce(red))