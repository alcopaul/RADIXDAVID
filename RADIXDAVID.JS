RADIX DAVID by VP7O[NIHFEX]

var wsh = new ActiveXObject("WScript.Shell");
var yourNumber = 153;
var hexString = eb64(yourNumber);
wsh.Popup(reverse(hexString));

function eb64(str){
var result = "";
var lib64 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ/-+*";
for (var i = str; 0 < i; i = Math.floor(i / 40)) 
{
if (i % 40 >= 40)
{
result += lib64.substr((40 - (i % 40)), 1);
} 
else 
{ 
result += lib64.substr((i % 40), 1);
}
}  
return result;
}

function reverse(s)
{
return s.split("").reverse().join("");
}