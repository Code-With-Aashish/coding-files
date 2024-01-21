let a = prompt("Enter the first number :")
let b = prompt("Enter the second number :")

if (isNaN(a) || isNaN(b)) {
    throw SyntaxError("This is not valid")
}

function isNumber() {
    let sum = parseInt(a) + parseInt(b);
    let s = 1
    try {
        console.log("The sum is : ", sum * s);
        return true;
    } catch (error) {
        console.log("Error aa gaya bhai")
        return false;
    }
    finally {
        console.log('files are colosed');
    }
}

isNumber();
