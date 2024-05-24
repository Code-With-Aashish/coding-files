
const fs = require('fs');
// const fs = require('fs/promises');

// console.log(fs);

console.log("Starting");

// fs.writeFileSync("ashu.txt", "hii my name is Aashihs")
fs.writeFile("ashu2.txt", "Hii my nmae is aashihs ", () => {
    console.log("Done");
    fs.readFile("ashu2.txt", (error, data) => {
        console.log(error, data.toString());
    })
})
fs.appendFile("ashu2.txt", "hii my name is Krish", (error, data) => {
    console.log(data);
})
console.log("Ending");