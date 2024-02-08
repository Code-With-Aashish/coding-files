const express = require('express');
const http = require('http');
const socketIO = require('socket.io');
const cors = require('cors');

const app = express();
const server = http.createServer(app);
const io = socketIO(server);

app.use(cors());

const users = {};

io.on('connection', (socket) => {
    socket.on('new-user-connected', (name) => {
        console.log("New user", name);
        users[socket.id] = name;
        socket.broadcast.emit('user-joined', name);
    });

    socket.on('send', (message) => {
        socket.broadcast.emit('receive-message', { message: message, name: users[socket.id] });
    });

    // Handling disconnection
    socket.on('disconnect', () => {
        const disconnectedUser = users[socket.id];
        delete users[socket.id];
        if (disconnectedUser) {
            io.emit('left', disconnectedUser);
        }
    });
});

const PORT = process.env.PORT || 8000;

server.listen(PORT, () => {
    console.log(`Server is running on port ${PORT}`);
});
