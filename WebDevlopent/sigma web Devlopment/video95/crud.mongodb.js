// c - Creat
// R - Read
// U - Update
// D - delete
// use("crudDB")
// console.log(db);

// c - Creat
// db.createCollection("courses")
// db.courses.insertOne({
//     name: "Hii my name is Aashihs",
//     price: "00",
//     assinment: "12",
//     project: "20"
// })

// db.courses.insertMany([
//     {
//       "name": "Python Masterclass",
//       "price": 0,
//       "assignments": 10,
//       "projects": 30
//     },
//     {
//       "name": "JavaScript Basics",
//       "price": 0,
//       "assignments": 8,
//       "projects": 20
//     },
//     {
//       "name": "C# for Beginners",
//       "price": 0,
//       "assignments": 15,
//       "projects": 40
//     },
//     {
//       "name": "Web Development Fundamentals",
//       "price": 0,
//       "assignments": 12,
//       "projects": 35
//     },
//     {
//       "name": "Java Programming Essentials",
//       "price": 0,
//       "assignments": 14,
//       "projects": 38
//     },
//     {
//       "name": "ReactJS Crash Course",
//       "price": 0,
//       "assignments": 10,
//       "projects": 25
//     },
//     {
//       "name": "SQL Simplified",
//       "price": 0,
//       "assignments": 12,
//       "projects": 30
//     },
//     {
//       "name": "Responsive Web Design",
//       "price": 0,
//       "assignments": 10,
//       "projects": 28
//     },
//     {
//       "name": "Node.js for Beginners",
//       "price": 0,
//       "assignments": 13,
//       "projects": 36
//     },
//     {
//       "name": "Frontend Development with Vue.js",
//       "price": 0,
//       "assignments": 11,
//       "projects": 32
//     }
//   ])


//  R-read
// let a = db.courses.find({ price: 0 })
// console.log(a);
// console.log(a.count());

// let b = db.courses.findOne({ price: 0 })
// console.log(b);


// U-Update
// db.courses.updateOne({ price: 10 }, { $set: { price: 1000 } })
// db.people.updateMany({ price: 1000 }, { $set: { price: 10000 } })

// D-delete

// db.courses.deleteOne({ price: 1000 });
// db.courses.deleteMany({ price: 10 });