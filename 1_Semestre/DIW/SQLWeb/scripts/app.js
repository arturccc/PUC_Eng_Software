let user;
let email;
let pass;

function verificacao(){
    let user = localStorage.getItem("user");
    if(user){
        window.location.href = "home.html"
    }
}

function cadastro(){
    let userinput = document.getElementById('user');
    user = userinput.value;
    let emailinput = document.getElementById('email');
    email = emailinput.value
    let passinput = document.getElementById('pass');
    pass = passinput.value;
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
                let userV = localStorage.getItem("user");
                if(!userV){
                    localStorage.setItem("user", user);
                    localStorage.setItem("email", email);
                    localStorage.setItem("pass", pass);
                    window.location.href = "confirm.html"
                }else{
                    window.location.href = "confirm.html"
                }
                
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

let salvar = false

function savetrue(){
    salvar = true
    save()
}

function savefalse(){
    salvar = false
    save()
}

function save(){
    let user = localStorage.getItem("user");
    let email = localStorage.getItem("email");
    let pass = localStorage.getItem("pass");


    if(!salvar){
        localStorage.clear();
        window.location.href = "index.html"
    }else{
        window.location.href = "home.html"
    }
}

function home(){
    let usr = document.getElementById('usr');
    let eml = document.getElementById('eml');
    let sen = document.getElementById('sen');

    console.log(usr);
    console.log(eml);
    console.log(sen);

    let user = localStorage.getItem("user");
    let email = localStorage.getItem("email");
    let pass = localStorage.getItem("pass");


    usr.innerHTML = 'Usuario: ' + user
    eml.innerHTML = 'Usuario: ' + email
    sen.innerHTML = 'Usuario: ' + pass
}

function delet(){
    localStorage.clear();
    window.location.href = "index.html"
}

