// Rig-S Dashboard Script

let running = false;
let runtime = 0;

let submitted = 0;
let accepted = 0;
let rejected = 0;

const consoleBox = document.getElementById("console");

function log(message)
{
    const now = new Date().toLocaleTimeString();

    consoleBox.value += "\n[" + now + "] " + message;
    consoleBox.scrollTop = consoleBox.scrollHeight;
}

function updateDashboard()
{
    if(!running)
        return;

    runtime++;

    let h = String(Math.floor(runtime / 3600)).padStart(2,"0");
    let m = String(Math.floor((runtime % 3600) / 60)).padStart(2,"0");
    let s = String(runtime % 60).padStart(2,"0");

    document.getElementById("timeDial").textContent =
        h + ":" + m + ":" + s;

    document.getElementById("speedDial").textContent =
        Math.floor(Math.random() * 4000) + " H/s";

    document.getElementById("heatDial").textContent =
        (35 + Math.floor(Math.random() * 25)) + " °C";

    submitted++;
    document.getElementById("submitted").textContent = submitted;

    if(Math.random() > 0.2)
    {
        accepted++;
        document.getElementById("accepted").textContent = accepted;
        log("Accepted share");
    }
    else
    {
        rejected++;
        document.getElementById("rejected").textContent = rejected;
        log("Rejected share");
    }

    let visitors =
        parseInt(localStorage.getItem("RigSVisitors") || "0");

    if(visitors === 0)
    {
        visitors = 1;
        localStorage.setItem("RigSVisitors", visitors);
    }

    document.getElementById("totalVisitors").textContent =
        visitors;
}

document.getElementById("start").addEventListener("click", function()
{
    if(running)
        return;

    running = true;

    log("Rig-S Started");
});

document.getElementById("stop").addEventListener("click", function()
{
    running = false;

    log("Rig-S Stopped");
});

setInterval(updateDashboard, 1000);
