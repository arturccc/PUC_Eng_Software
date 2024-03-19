function cadastro(){
    let userinput = document.getElementById('user');
    let user = userinput.value;
    let emailinput = document.getElementById('email');
    let email = emailinput.value
    let passinput = document.getElementById('pass');
    let pass = passinput.value;
    let confirmpassinput = document.getElementById('confirmpass');
    let confirmpass = confirmpassinput.value

    let erro = document.getElementById('erro');

    if(pass === confirmpass){
        window.location.href = "confirm.html"
    }else{
        erro.innerHTML = "Senhas não iguais"
    }

}