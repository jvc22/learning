function carregar(){
    var msg = window.document.getElementById("msg")
    var img = window.document.getElementById("imagem")
    var data = new Date()
    var hora = data.getHours()
    
    if(hora > 1){
        msg.innerHTML = `Agora são ${hora} horas.`
    }
    else if(hora == 1){
        msg.innerHTML = `Agora é 1h.`
    }
    else{
        msg.innerHTML = `Agora é meia-noite.`
    }

    if(hora >= 0 && hora < 12){
        img.src = 'fotodia.jpg'
        document.body.style.background = '-webkit-gradient(linear, left top, left bottom, from(#FBAB7E), to(#F7CE68)) fixed'
    }
    else if(hora >= 12 && hora < 18){
        img.src = 'fototarde.jpg'
        document.body.style.background = '-webkit-gradient(linear, left top, left bottom, from(#8BC6EC), to(#9599E2)) fixed'
    }
    else{
        img.src = 'fotonoite.jpg'
        document.body.style.background = '-webkit-gradient(linear, left top, left bottom, from(#28313B), to(#485461)) fixed'
    }
}