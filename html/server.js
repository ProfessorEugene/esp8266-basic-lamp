const express = require('express')
const app = express()
app.use(express.static('.'))

var status = 0;
app.get('/get', function(req,res){
    res.json({status});
})
app.get('/set', function(req,res){
    status = req.query.s;
    res.json({status});
});

app.listen(3000, () => console.log('Example app listening on port 3000!'))