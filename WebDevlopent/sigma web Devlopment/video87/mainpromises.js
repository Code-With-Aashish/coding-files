import fs from 'fs/promises';

let b = await fs.appendFile("kush.txt", "\nhii my name is kush")
console.log(b.toString());

let a = await fs.readFile("ashu2.txt")
console.log(a.toString());
