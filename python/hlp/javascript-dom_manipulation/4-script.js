ul = document.querySelector("ul");
button = document.querySelector("#add_item");
button.addEventListener("click", addelement);

function addelement()
{
    li = document.createElement("li");
    txt = document.createTextNode("Item");
    li.appendChild(txt);
    ul.appendChild(li);
}