console.log("This is created by me")

// var div = document.createElement("div");
// div.innerHTML = "I am incerted by javascript";
// div.setAttribute("class", "created");
// document.querySelector(".container").append(div);
// var container = document.querySelector(".container");
// container.replaceChild(div, container.querySelector(".box"));

var cont = document.querySelector(".container");
cont.insertAdjacentHTML("beforeend", "<div class='created'> hii my name is Aashihs</div> ");
