const socket = io('http://localhost:8000');

const form = document.getElementById("send-container");
const messageInput = document.getElementById("msgInp");
const messageContainer = document.querySelector(".container");
const name = prompt("Enter Your name to join : ");

const append = (message, position) => {
    const messageElement = document.createElement("div");
    messageElement.innerHTML = message;
    messageElement.classList.add("message");
    messageElement.classList.add(position);
    messageContainer.append(messageElement);
}

socket.emit("new-user-connected", name);
console.log(name);

socket.on('user-joined', (userName) => {
    append(`${userName} joined the chat`, 'right');
});