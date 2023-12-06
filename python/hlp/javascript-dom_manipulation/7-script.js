fetch('https://swapi-api.hbtn.io/api/films/?format=json')
    .then(response => response.json())
    .then(r2 => {
        ul = document.querySelector("#list_movies");
        for (each in r2['results'])
        {
            ul.append(Object.assign(document.createElement('li'), {textContent: r2['results'][each]['title']}));
            //console.log(r2['results'][each]);
        }
    })