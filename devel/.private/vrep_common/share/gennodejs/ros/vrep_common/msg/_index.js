
"use strict";

let VrepInfo = require('./VrepInfo.js');
let ObjectGroupData = require('./ObjectGroupData.js');
let ProximitySensorData = require('./ProximitySensorData.js');
let VisionSensorData = require('./VisionSensorData.js');
let VisionSensorDepthBuff = require('./VisionSensorDepthBuff.js');
let JointSetStateData = require('./JointSetStateData.js');
let ScriptFunctionCallData = require('./ScriptFunctionCallData.js');
let ForceSensorData = require('./ForceSensorData.js');

module.exports = {
  VrepInfo: VrepInfo,
  ObjectGroupData: ObjectGroupData,
  ProximitySensorData: ProximitySensorData,
  VisionSensorData: VisionSensorData,
  VisionSensorDepthBuff: VisionSensorDepthBuff,
  JointSetStateData: JointSetStateData,
  ScriptFunctionCallData: ScriptFunctionCallData,
  ForceSensorData: ForceSensorData,
};
