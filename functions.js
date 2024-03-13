function search() {
    var numbersInput = document.getElementById('numbers').value;
    var targetNumber = parseInt(document.getElementById('target').value);

    // Convertir la cadena de números en un array
    var numbersArray = numbersInput.split(',').map(function(num) {
      return parseInt(num);
    });

    // Realizar la búsqueda secuencial
    var foundIndex = -1;
    for (var i = 0; i < numbersArray.length; i++) {
      if (numbersArray[i] === targetNumber) {
        foundIndex = i;
        break;
      }
    }

    // Mostrar el resultado
    var output = document.getElementById('output');
    if (foundIndex !== -1) {
      output.innerHTML = 'El número ' + targetNumber + ' fue encontrado en la posición ' + foundIndex + '.';
    } else {
      output.innerHTML = 'El número ' + targetNumber + ' no fue encontrado en la lista.';
    }
  }