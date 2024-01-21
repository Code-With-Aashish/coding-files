// let obj = {
//     a: "aashihs",
//     b: "90"
// };

// console.log(obj);

// let animal = {
//     eats: true,
// };

// let rabbit = {
//     jump: true,
// };

// rabbit.__proto__ = animal

class Animal {
    constructor(name) {
        this.name = name;
        console.log("The Animal is created...");
    }

    eats() {
        console.log("kha raha hoom bhai")
    }
    jumps() {
        console.log("jump kar raha hoom bhai");
    }
};
class lion extends Animal {
    constructor(name) {
        super("name");
        this.name = name;
        console.log("The lion is created...");
    }
    eats() {
        console.log("kha raha hoom bhai and dhad raha hoo");
    }
};

let a = new Animal("bunny");
console.log(a);

let l = new lion("shera");
console.log(l);
