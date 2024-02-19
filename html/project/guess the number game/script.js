var randomNumber = Math.floor(Math.random() * 100 + 1);
var guesses = document.querySelector('.guessField');
var guessSubmit = document.querySelector('.guessSubmit');
var lastResult = document.querySelector('#result');
var resetButton;
var guessCount = 0;

console.log(randomNumber);

function checkGuess() {
    var userGuess = Number(guesses.value);
    if (userGuess === randomNumber) {
        lastResult.textContent = 'Congratulations! You got it right!';
        setGameOver();
    }
    else if (userGuess > randomNumber) {
        lastResult.textContent = 'this is grater then random number';
    }
    else if (guesses.value == "") {
        lastResult.textContent = 'Enter the number';
        alert("Enter the number")
    }
    else {
        lastResult.textContent = 'this is smaller then random number';
    }
    guessCount++;
    guesses.value = '';
    guesses.focus();

    guessCountDisplay.textContent = guessCount;
}
guessSubmit.addEventListener('click', checkGuess);


function setGameOver() {
    guesses.disabled = true;
    guessSubmit.disabled = true;
    resetButton = document.createElement('button');
    resetButton.textContent = 'Start new game';
    var card = document.querySelector('.card');
    card.append(resetButton);
    resetButton.classList.add('over');
    resetButton.classList.add('btn-over');
    resetButton.addEventListener('click', resetGame);
}

function resetGame() {
    guessCount = 1;
    var resetParas = document.querySelectorAll('#result');
    for (var i = 0; i < resetParas.length; i++) {
        resetParas[i].textContent = '';
    }
    resetButton.parentNode.removeChild(resetButton);
    guesses.disabled = false;
    guessSubmit.disabled = false;
    guesses.value = '';
    guesses.focus();
    lastResult.style.backgroundColor = 'white';
    randomNumber = Math.floor(Math.random() * 100) + 1;
}

// var valueElement = document.querySelector('.incr-decr');
// var plusButton = document.querySelector('.plus');
// var minusButton = document.querySelector('.minus');
// var value = 0;

// function increment() {
//     value += 1;
//     valueElement.textContent = value;
// }

// function decrement() {
//     if (value > 0) {
//         value -= 1;
//         valueElement.textContent = value;
//     }
// }

// console.log(value);

// plusButton.addEventListener('click', increment);
// minusButton.addEventListener('click', decrement);
