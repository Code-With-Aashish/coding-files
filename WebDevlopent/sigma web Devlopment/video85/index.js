const http = require('http');
const hostname = '127.0.0.1';
const port = 4000;

const server = http.createServer((req, res) => {
    res.statusCode = 200;
    res.setHeader('Content-Type', 'text/plain');
    res.end("Hello, world!");
});

server.on('error', (error) => {
    console.error('Error occurred:', error.message);
    // Optionally, you can handle the error gracefully or close the server
    // server.close();
});

server.listen(port, hostname, () => {
    console.log(`Server running at http://${hostname}:${port}/`);
});
