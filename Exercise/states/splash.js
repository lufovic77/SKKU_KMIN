Splash.prototype = {

  loadScripts: function () {
  },

  loadBgm: function () {
  },

  loadImages: function () {
  },

  loadFonts: function () {
  },

  // The preload function then will call all of the previously defined functions:
  preload: function () {
    var myLogo, loadingBar, status;
    game.add.sprite(0, 0, 'stars');

    myLogo = game.add.sprite(game.world.centerX, 100, 'brand');
    myLogo.anchor.setTo(0.5);
    myLogo.scale.setTo(0.5);

    status = game.add.text(game.world.centerX, 380, 'Loading...', {fill: 'white'});
    status.anchor.setTo(0.5);

    loadingBar = game.add.sprite(game.world.centerX, 400, "loading");
    loadingBar.anchor.setTo(0.5);
    this.load.setPreloadSprite(loadingBar);
    this.loadScripts();
    this.loadImages();
    this.loadFonts();
    this.loadBgm();
  },