/*=================================================
    Rig-S® Dashboard
=================================================*/

let running = false;

let runtimeSeconds = 0;

let submitted = 0;
let accepted = 0;
let rejected = 0;

/*----------------------------------------------
 Visitor Counter
----------------------------------------------*/

let visitors =
localStorage.getItem("RigSVisitors");

if(visitors == null)
{
    visitors = 1;
}
else
{
    visitors = parseInt(visitors) + 1;
}

localStorage.setItem("RigSVisitors", visitors);

document.getElementById("todayVisitors").innerHTML = "1";
document.getElementById("totalVisitors").innerHTML = visitors;
document.getElementById("footerVisitors").innerHTML = visitors;

/*----------------------------------------------
 Console
----------------------------------------------*/

const consoleBox =
document.getElementById("console");

function log(message)
{
    const now = new Date();

    const time = now.toLocaleTimeString();

    consoleBox.value +=
    "\n[" + time + "] " + message;

    consoleBox.scrollTop =
    consoleBox.scrollHeight;

    document.getElementById("walletUpdate").innerHTML =
    time;
}

/*----------------------------------------------
 Runtime
----------------------------------------------*/

function updateRuntime()
{
    if(!running)
        return;

    runtimeSeconds++;

    let h =
    String(Math.floor(runtimeSeconds/3600)).padStart(2,"0");

    let m =
    String(Math.floor((runtimeSeconds%3600)/60)).padStart(2,"0");

    let s =
    String(runtimeSeconds%60).padStart(2,"0");

    let text =
    h + ":" + m + ":" + s;

    document.getElementById("timeDial").innerHTML =
    text;

    document.getElementById("footerRuntime").innerHTML =
    text;
}

/*----------------------------------------------
 Dashboard Simulation
----------------------------------------------*/

function updateDashboard()
{
    if(!running)
        return;

    let speed =
    Math.floor(Math.random()*4500);

    let heat =
    35 + Math.floor(Math.random()*35);

    document.getElementById("speedDial").innerHTML =
    speed + " H/s";

    document.getElementById("heatDial").innerHTML =
    heat + " °C";

    submitted++;

    document.getElementById("submitted").innerHTML =
    submitted;

    if(Math.random()>0.25)
    {
        accepted++;

        document.getElementById("accepted").innerHTML =
        accepted;

        log("Accepted");

    }
    else
    {
        rejected++;

        document.getElementById("rejected").innerHTML =
        rejected;

        log("Rejected");
    }
}

/*----------------------------------------------
 Buttons
----------------------------------------------*/

document.getElementById("start").onclick =
function()
{
    if(running)
        return;

    running = true;

    document.getElementById("projectStatus").innerHTML =
    "RUNNING";

    document.getElementById("walletStatus").innerHTML =
    "Connected";

    log("Rig-S Started");
};

document.getElementById("stop").onclick =
function()
{
    running = false;

    document.getElementById("projectStatus").innerHTML =
    "STOPPED";

    document.getElementById("walletStatus").innerHTML =
    "Disconnected";

    log("Rig-S Stopped");
};

document.getElementById("clearLog").onclick =
function()
{
    consoleBox.value =
    "Rig-S® Dashboard Ready...\n";
};

document.getElementById("settings").onclick =
function()
{
    alert("Settings panel coming soon.");
};

/*----------------------------------------------
 Timers
----------------------------------------------*/

setInterval(updateRuntime,1000);

setInterval(updateDashboard,1200);
