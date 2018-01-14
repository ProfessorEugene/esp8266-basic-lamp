var fs = require('fs');
var cpMarkup = fs.readFileSync('controlPanel.html');
cpMarkup = cpMarkup.toString().replace(/"/g, '\\"');
var lines = cpMarkup.split('\n');
for(var i = 0; i < lines.length; i++){
    console.log('"' + lines[i] + '\\n"\\');
}