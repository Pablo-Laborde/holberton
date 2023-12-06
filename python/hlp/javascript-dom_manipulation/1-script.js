header = document.querySelector("header");
button = document.querySelector("#red_header");
button.addEventListener("click", updatecolor);

function updatecolor()
{
    header.style.color = "#FF0000";
}