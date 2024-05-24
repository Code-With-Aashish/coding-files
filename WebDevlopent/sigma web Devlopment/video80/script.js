// https://www.youtube.com/playlist?list=PLduM7bkxBdOekXfkEqIBAivzG99V2LrAS

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
        super.eats();
        console.log("kha raha hoom bhai and dhad raha hoo");
    }
};

let a = new Animal("bunny");
console.log(a);

let l = new lion("shera");
console.log(l);


// let obj = {
//     _value: 0, // convention to use an underscore for the private property
//     get value() {
//         console.log("Getting the value");
//         return this._value;
//     }
// };

// console.log(obj.value); // Outputs: "Getting the value" followed by the actual value (0 in this case)

// let obj = {
//     _value: 0,
//     set value(newValue) {
//         console.log("Setting the value to", newValue);
//         this._value = newValue;
//     }
// };

// obj.value = 42; // Outputs: "Setting the value to 42"
// console.log(obj._value); // Outputs: 42

