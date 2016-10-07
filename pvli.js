var enemy = {
  _graphic: 'enemigo.png',
  _position: { x: 10, y: 10 },
  _score: 50,

  moveLeft: function () { 
this._position.x -=1;
 },
  moveRight: function () { 
this._position.x +=1;
},
  advance: function () { ;
this._position.y +=1; },
  shoot: function () { newShot(_position,10); } 
};

var nave = {
  _graphic: 'nave.png',
  _position: { x: 10, y: 0 },


  moveLeft: function () {
this._position.x -=1;
 },
  moveRight: function () { 
this._position.x +=1;
},
  shoot: function () { newShot(_position,10); } 
};

function newShot(position, velocity) {
  var obj = {};
  obj._position = position;
  obj._velocity = velocity;
  obj.advance = function () {
    this._position.y += this._velocity;
  };
  return obj;
};