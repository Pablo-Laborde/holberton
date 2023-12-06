header = document.querySelector("header");
button = document.querySelector("#toggle_header");
button.addEventListener("click", changeclass);

function changeclass()
{
    if (header.classList == 'red')
    {
        header.classList.remove('red')
        header.classList.add('green')
    }
    else
    {
        header.classList.remove('green')
        header.classList.add('red')
    }
}