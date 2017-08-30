var game = new Phaser.Game(800, 600, Phaser.AUTO, '');

var Main= {

  preload: function () {
    game.load.image('stars',    'assets/images/stars.jpg');
    console.log("Hello!")
    game.load.image('loading',  'assets/images/loading.png');
    game.load.image('brand',    'assets/images/logo.png');
    game.load.script('utils',   'lib/utils.js');
    game.load.script('splash',  'states/Splash.js');

    
  },

  create: function () {
    game.state.add('Splash', Splash);
    game.state.start('Splash');
  }

};

game.state.add('Main', Main);
game.state.start('Main');