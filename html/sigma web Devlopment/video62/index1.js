let random = Math.random();
let first, second, third;

// Lets generaate the first value

if (random < 0.33) {
    first = "crazy";
}
else if (random > 0.33 && random <= 0.66) {
    first = "Amazing";

}
else {
    first = "fire";
}

// Lets generaate the seccond value


if (random < 0.33) {
    second = "Engine";
}
else if (random > 0.33 && random <= 0.66) {
    second = "Foods";

}
else {
    second = "Garments";
}

// Lets generaate the third value


if (random < 0.33) {
    first = "Bros";
}
else if (random > 0.33 && random <= 0.66) {
    first = "Limited";

}
else {
    first = "Hub";
}

console.log(first + second + third)