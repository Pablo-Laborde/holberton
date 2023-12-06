fetch('https://hellosalut.stefanbohacek.dev/?lang=fr')
    .then(response => response.json())
    .then(response => {
        div = document.querySelector('#hello')
        div.textContent = response['hello']
    })