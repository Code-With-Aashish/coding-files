const express = require('express')
const app = express()
app.set('view engine', 'ejs');
const port = 3000

app.get('/', (req, res) => {
    let sitename = "kusher"
    let SearchText = "Hii my name is Aashihs"
    res.render("index", { sitename: sitename, searchText: combo })
})
app.get('/blog/:slug', (req, res) => {
    let Blogtitle = "this website is very useful"
    let contant = "hii my name is Aashish"
    res.render("templets/blogpost.html", { Blogtitle: Blogtitle, contant: contant })
})

app.listen(port, () => {
    console.log(`Example app listening on port ${port}`)
})