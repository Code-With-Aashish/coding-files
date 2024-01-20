let prom1 = new Promise((resolve, reject) => {
    let a = Math.random();
    if (a < 0.5) {
        reject("I am reajered 1")
    }
    else {
        setTimeout(() => {
            console.log("running 1")
            resolve("resolved")
        }, 2000);
    }
})

let prom2 = new Promise((resolve, reject) => {
    let a = Math.random();
    if (a < 0.5) {
        reject("I am rejected 2")
    }
    else {
        setTimeout(() => {
            console.log("running 2")
            resolve("resolved 2")
        }, 1000);
    }
})


let p3 = Promise.allSettled([prom1, prom2])
p3.then((a) => {
    console.log(a)
}).catch(err => {
    console.log(err)
})