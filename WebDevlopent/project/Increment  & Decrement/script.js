var valueElement = document.querySelector('.incr-decr');
var plusButton = document.querySelector('.plus');
var minusButton = document.querySelector('.minus');
var value = 0;

function increment() {
    value += 1;
    valueElement.textContent = value;
}
function decrement() {
    if (value == 0) {
        alert("value is 0")
    }
    else {
        value -= 1;
        valueElement.textContent = value;
    }
}


console.log(value);


plusButton.addEventListener('click', increment);
minusButton.addEventListener('click', decrement);