var jsf = $.getJSON("https://swapi-api.hbtn.io/api/films/?format=json", {}, function(data) {
    for (let i in data['results']) {
        console.log(data['results'][i]['title']);
        $("#list_movies").append("<li>" + data['results'][i]['title'] + "</li>")
    }
    //console.log(data['results'][0]);
})