
document.body.style.backgroundColor = "black";
document.body.style.color = "green";

const addItem = async (item) => {
    await randomDelay();
    let div = document.createElement("div");
    div.innerHTML = item;
    document.body.append(div)
}

const randomDelay = () => {
    return new Promise((resolve) => {
        timeout = 1 + 6 * Math.random() * 1000;
        setTimeout(() => {
            resolve()
        }, timeout);
    })
}

// The `async` keyword is used to define a function that returns a promise, and the `await` keyword is used to wait for the promise to resolve or reject inside the function.

async function main() {


    let t = setInterval(() => {
        let last = document.body.getElementsByTagName("div");
        last = last[last.length - 1]
        if (last.innerHTML.endsWith("...")) {
            last.innerHTML = last.innerHTML.slice(0, last.innerHTML.length - 3)
        }
        else {

            last.innerHTML = last.innerHTML + "."
        }

    }, 400);


    let text = ["Initialized Hacking now reading your data",
        "Reading your Files",
        "Password files Detected",
        "Sending all passwords and personal files to server",
        "Cleaning up"]

    for (const item of text) {
        await addItem(item)
    }

    await randomDelay()
    clearInterval(t)

}
main()