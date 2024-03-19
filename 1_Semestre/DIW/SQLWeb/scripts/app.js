function cadastro(){
    let userinput = document.getElementById('user');
    let user = userinput.value;
    let emailinput = document.getElementById('email');
    let email = emailinput.value
    let passinput = document.getElementById('pass');
    let pass = passinput.value;
    let confirmpassinput = document.getElementById('confirmpass');
    let confirmpass = confirmpassinput.value


    if(!user){
        gerarAlerta("Preencha o campo de usuario!")
    }

    if(!email){
        gerarAlerta("Preencha o campo de email!") 
    }

    if(pass && confirmpass){
        if(pass === confirmpass){
            let numV = /[a-zA-Z]/.test(pass);
            let letraV = /\d/.test(pass);
            if(pass.length < 5){
                gerarAlerta("Digite uma senha com 5 ou mais caracteris")
            }else if(!numV || !letraV){
                gerarAlerta("Sua senha deve possuir numeros e letras")
            }else{
                window.location.href = "confirm.html"
            }
            
        }else{
            gerarAlerta("Senhas não iguais!");
        }
    }else if(!confirmpass && pass){
        gerarAlerta("Por Favor confirme sua senha!")
    }else if(!pass && confirmpass || !pass && !confirmpass){
        gerarAlerta("Por Favor digite uma senha!")
    }
     
}

let alertaBox = document.getElementById('alertaBox');

function gerarAlerta(msg){
    let  alerta = document.createElement('div');
    alerta.classList.add('alerta');
    alerta.innerHTML = '<i class="fa-solid fa-circle-xmark"></i>' + msg;
    alertaBox.appendChild(alerta)

    setTimeout(()=>{
        alerta.remove();
    }, 4000)
}