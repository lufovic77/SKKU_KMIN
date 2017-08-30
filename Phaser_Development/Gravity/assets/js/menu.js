var start;
var music;
var titleText;
var startText,optionText;
var Menu = {
    preload : function() {
        // load menu image form game object
        game.load.image('back', './assets/images/back.png');
        game.load.image('start', './assets/images/startButton.png');

    game.load.audio('background','./assets/musics/Marimba-Boy.wav');
    },

  init: function () {
    this.titleText = game.make.text(game.world.centerX, 100, "Gravity", {
        font: 'bold 65px Arial',
      fill: '#FDFFB5',
      align: 'center'
    });
    this.titleText.setShadow(3, 3, 'rgba(0,0,0,0.5)', 5);
    this.titleText.anchor.set(0.5);
   // this.optionCount = 1;
  },
    create: function () {
        // add image
    	music = game.sound.play('background');
        game.add.sprite(0, 0, 'back');
        start = Menu.add.sprite(640, 350, 'start');
        start.width=100;
        start.height=60;
        start.anchor.set(0.5);
        start.inputEnabled = true;     //Sending the signal of clicking the switch button
        start.events.onInputDown.add(this.startGame, this);


        game.add.existing(this.titleText);


        startText=game.add.text(80, 330, "Start", 
        { 
            font: "45px Arial", 
            fill: "#FDFFB5", 
            align: "center" 
        });

    startText.anchor.set(0.5);

    startText.inputEnabled = true;

    startText.events.onInputOver.add(this.over, this);
    startText.events.onInputOut.add(this.out, this);

    startText.events.onInputDown.add(this.down, this);
    startText.events.onInputUp.add(this.up, this);

    },
    
    startGame: function () {
        // Change the state to the actual game.
        this.state.start('Game');
        console.log("hello ");
    },
    over: function(item){

    item.fill = "#ffff44";
    item.text = "clicked " + clicks + " times";
    },
    out: function(item){
        
    item.fill = "#ff0044";
    item.text = "click and drag me";
    },

    down: function(item){
        
    clicks++;

    item.text = "clicked " + clicks + " times";
    },
    up: function(item){
        
    item.text = "thanks for clicking!"; //go to next state
    }


};