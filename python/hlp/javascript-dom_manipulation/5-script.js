header = document.querySelector("header");
button = document.querySelector("#update_header");
button.addEventListener("click", changetext);

function changetext()
{
    header.textContent = "New Header!!!"
}