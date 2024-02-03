const express = require('express')
const blog = require('./routes/blog')
const shop = require('./routes/shop')

const app = express()
const port = 3000

app.use(express.static("public"))
app.use('/blog', blog)
app.use('/shop', shop)

app.get('/', (req, res) => {
  console.log("Hey its a get request")
  res.send('Hello World21!')
})
app.post('/', (req, res) => {
  console.log("Hey its a post request")
  res.send('Hello World post!')
})

app.put('/', (req, res) => {
  console.log("Hey its a put request")
  res.send('Hello World put!')
})

app.get("/index", (req, res) => {
  console.log("Hey its index")
  res.sendFile('templates/index.html', { root: __dirname })
})

app.get("/api", (req, res) => {
  res.json({ a: 1, b: 2, c: 3, d: 4, name: ["harry", "jerry"] })
})

app.listen(port, () => {
  console.log(`Example app listening on port ${port}`)
})


// Route to download test2.html
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
