#!/usr/bin/env node

var br = require('../build/Release/openbr');

var version = br.version();

console.log("Using OpenBR Version: ", version);

var fileA = "sarat";
var fileB = "bob";
var score = br.compareFaces(fileA, fileB);
console.log("Comparing", fileA, ",", fileB, "-->'", score, "'");
