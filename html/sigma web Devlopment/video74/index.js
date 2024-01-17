// https://developer.mozilla.org/en-US/docs/Web/API/Element/scrollLeft  ---> for more event function.
let btn = document.getElementById("btn")

btn.addEventListener("dblclick", () => {
    document.querySelector(".box").innerHTML = "hey I was clicked";
    document.querySelector(".box").style.color = "yellow";
    document.querySelector(".box").style.backgroundColor = "green";
});

btn.addEventListener("contextmenu", () => {
    alert("You do right click !!");
});

document.addEventListener("keydown", (e) => {
    console.log(e.key);
});
