var dat = $.getJSON("https://hellosalut.stefanbohacek.dev/?lang=fr", {}, function(data) {
    $("#hello").append(data['hello'])
    console.log(data['hello'])
})