var wsh = new ActiveXObject("WScript.Shell");
//begin input values here
var num = 1600;
var bsx = 40;
//end input values here
wsh.Popup(reverse(erx(num, bsx)));
function erx(str, bac)
{
var res = "";
var lib = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ/-+*";
// note: lib.length must be equal to base
if (str == 0)
{
return "0";
}
for (var i = str; 0 < i; i = Math.floor(i / bac)) 
{
res += lib.substr((i % bac), 1);
}
return res;
}
function reverse(s)
{
return s.split("").reverse().join("");
}
// RADIX DAVID BY VP70[NIHFEX] 04/11/2016
