const express = require('express')
const app = express()
const port = 3000

app.use(express.static("public"))

app.get('/', (req, res) => {
    res.send('Hello World!')
    console.log('hey this is gte request');
    // console.log(res);
    // console.log(req);
}).post('/', (req, res) => {
    res.send('Hello World post!')
    console.log("hey this is post request");
    // console.log(res);
    // console.log(req);
}).put('/', (req, res) => {
    res.send('Hello World put!')
    console.log("hey this is put request");
    // console.log(res);
    // console.log(req);
})
app.get('/index', (req, res) => {
    res.sendFile("templets/index.html", { root: __dirname })
    console.log("hey this is index");
})

app.get('/api', (req, res) => {
    res.json({ a: 1, b: 2, c: 3, d: 4 });
})

app.get('/download', (req, res) => {
    const filePath = 'G:/coding files/html/sigma web Devlopment/video89/test2.html';
    res.download(filePath, (err) => {
        if (err) {
            console.error('Error downloading file:', err);
            res.status(500).send('Internal Server Error');
        } else {
            console.log("hey, this is a download request");
        }
    });
});


app.listen(port, () => {
    console.log(`Example app listening on port ${port}`)
})


/*
// Define the URL endpoint where you want to send the POST request
const url = 'https://example.com/api';

// Define the data you want to send in the request body
const data = {
  key1: 'value1',
  key2: 'value2'
};

// Make the POST request using the fetch function
fetch(url, {
  method: 'POST', // Specify the HTTP method
  headers: {
    'Content-Type': 'application/json' // Specify the content type if you are sending JSON data
    // You may need to include additional headers depending on your API requirements
  },
  body: JSON.stringify(data) // Convert the data to JSON format and include it in the request body
 })
  .then(response => response.json()) // Parse the response as JSON
  .then(data => {
    console.log('Success:', data);
  })
  .catch(error => {
    console.error('Error:', error);
  });
*/
