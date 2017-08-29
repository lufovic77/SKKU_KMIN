//var GameMenu = function() {};
var music;

var bmpText;
var GameMenu= {
/*
  menuConfig: {
    startY: 260,
    startX: 30
  },*/
 preload: function() {

    game.load.bitmapFont('desyrel', './assets/fonts/desyrel.png', './assets/fonts/desyrel.xml');

},


 create: function() {

    bmpText = game.add.bitmapText(200, 100, 'desyrel', 'Phaser & Pixi\nrocking!', 64);

},

 update: function() {

    bmpText.text = 'Phaser & Pixi\nrocking!\n' + Math.round(game.time.now);

},
  down: function(){
        this.state.start('Game');
      }

};

//Phaser.Utils.mixinPrototype(GameMenu.prototype, mixins);
