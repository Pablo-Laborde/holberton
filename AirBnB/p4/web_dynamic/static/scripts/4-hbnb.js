window.onload = () => {
    const list = {}
    $("input:checkbox").click(function() {
        if ($(this).is(":checked")) {
            list[$(this).attr("data-id")] = $(this).attr("data-name")
        }
        else {
            delete list[$(this).attr("data-id")]
        }
        console.log(list)
        $(" .amenities h4").text(Object.values(list).join(", "))
    })
    $("button").click(function() {
        const amenities = { amenities: Object.keys(list) };
        $.ajax({
            url: 'http://localhost:5001/api/v1/places_search',
            method: 'POST',
            data: JSON.stringify(amenities),
            contentType: 'application/json',
            success: (data) => {
                $('section.places').empty();
                $('section.places').append(data.map(place => {
                    return `<article>
                    <div class="title_box">
                      <h2>${place.name}</h2>
                      <div class="price_by_night">${place.price_by_night}</div>
                    </div>
                    <div class="information">
                      <div class="max_guest">${place.max_guest}</div>
                      <div class="number_rooms">${place.number_rooms} Bedrooms</div>
                      <div class="number_bathrooms">${place.number_bathrooms} Bathrooms</div>
                    </div>
                    <div class="description">
                      ${place.description}
                          </div>
                  </article>`;
                  })
                );
            }
        });
    });
    $.ajax({
        url: 'http://localhost:5001/api/v1/status',
        method: 'GET',
        success: function(data) {
          if (data.status === 'OK') {
            $("div#api_status").addClass('available')
          }
        }
    })
    $.ajax({
        url: 'http://localhost:5001/api/v1/places_search',
        method: 'POST',
        data: '{}',
        contentType: 'application/json',
        success: (data) => {
            $('section.places').append(data.map(place => {
                return `<article>
                <div class="title_box">
                  <h2>${place.name}</h2>
                  <div class="price_by_night">${place.price_by_night}</div>
                </div>
                <div class="information">
                  <div class="max_guest">${place.max_guest}</div>
                  <div class="number_rooms">${place.number_rooms} Bedrooms</div>
                  <div class="number_bathrooms">${place.number_bathrooms} Bathrooms</div>
                </div>
                <div class="description">
                  ${place.description}
                      </div>
              </article>`;
              })
            );
        }
    });
}