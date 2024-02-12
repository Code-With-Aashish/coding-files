use('sigma');

// Insert a few documents into the sales collection.
db.getCollection('courses').insertMany([
    { "item": "abc", "price": 10, "quantity": 2, "date": "2014-03-01T08:00:00Z" },
    { "item": "xyz", "price": 20, "quantity": 5, "date": "2015-05-15T12:30:00Z" },
    { "item": "123", "price": 15, "quantity": 3, "date": "2016-08-20T18:45:00Z" },
    { "item": "def", "price": 8, "quantity": 1, "date": "2017-11-10T09:15:00Z" },
    { "item": "ghi", "price": 25, "quantity": 4, "date": "2018-02-25T14:00:00Z" },
    { "item": "lmn", "price": 12, "quantity": 2, "date": "2019-04-05T20:20:00Z" },
    { "item": "pqr", "price": 18, "quantity": 3, "date": "2020-07-12T11:45:00Z" },
    { "item": "uvw", "price": 30, "quantity": 6, "date": "2021-09-30T16:30:00Z" },
    { "item": "456", "price": 22, "quantity": 4, "date": "2022-12-05T22:10:00Z" },
    { "item": "rst", "price": 14, "quantity": 2, "date": "2023-01-15T07:00:00Z" }
]);

console.log("done");