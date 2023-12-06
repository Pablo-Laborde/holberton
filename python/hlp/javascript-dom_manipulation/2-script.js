header = document.querySelector("header");
button = document.querySelector("#red_header");
button.addEventListener("click", addclass);

function addclass()
{
    header.classList.add('red')
}