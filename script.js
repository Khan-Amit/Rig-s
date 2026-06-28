let running = false;

let submitted = 0;
let accepted = 0;
let rejected = 0;

let seconds = 0;

const speed =
document.getElementById("speedDial");

const heat =
document.getElementById("heatDial");

const runtime =
document.getElementById("timeDial");

const consoleWindow =
document.getElementById("console");

function log(message){

consoleWindow.value += "\n" + message;

consoleWindow.scrollTop =
consoleWindow.scrollHeight;

}

function updateClock(){

seconds++;

let h =
String(Math.floor(seconds/3600)).padStart(2,"0");

let m =
String(Math.floor((seconds%3600)/60)).padStart(2,"0");

let s =
String(seconds%60).padStart(2,"0");

runtime.innerHTML =
h + ":" + m + ":" + s;

}

function simulateRig(){

if(!running)
return;

let hash =
Math.floor(Math.random()*5000);

let temp =
40 + Math.floor(Math.random()*35);

speed.innerHTML =
hash + " H/s";

heat.innerHTML =
temp + " °C";

submitted++;

document.getElementById("submitted").innerHTML =
submitted;

if(Math.random()>0.25){

accepted++;

document.getElementById("accepted").innerHTML =
accepted;

log("✔ Accepted");

}else{

rejected++;

document.getElementById("rejected").innerHTML =
rejected;

log("✖ Rejected");

}

}

document
.getElementById("start")
.onclick=function(){

if(running)
return;

running=true;

log("--------------------------------");

log("Rig-S Started");

log("Dashboard Online");

};

document
.getElementById("stop")
.onclick=function(){

running=false;

log("Rig-S Stopped");

log("--------------------------------");

};

setInterval(updateClock,1000);

setInterval(simulateRig,1200);
