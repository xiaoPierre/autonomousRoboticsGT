// Auto-generated. Do not edit!

// (in-package vrep_common.srv)


"use strict";

let _serializer = require('../base_serialize.js');
let _deserializer = require('../base_deserialize.js');
let _finder = require('../find.js');

//-----------------------------------------------------------


//-----------------------------------------------------------

class simRosEndDialogRequest {
  constructor() {
    this.dialogHandle = 0;
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type simRosEndDialogRequest
    // Serialize message field [dialogHandle]
    bufferInfo = _serializer.int32(obj.dialogHandle, bufferInfo);
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type simRosEndDialogRequest
    let tmp;
    let len;
    let data = new simRosEndDialogRequest();
    // Deserialize message field [dialogHandle]
    tmp = _deserializer.int32(buffer);
    data.dialogHandle = tmp.data;
    buffer = tmp.buffer;
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a service object
    return 'vrep_common/simRosEndDialogRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '290f4bd47ce8d0f7c78c1d510052331a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    
    
    
    
    int32 dialogHandle
    
    `;
  }

};

class simRosEndDialogResponse {
  constructor() {
    this.result = 0;
  }

  static serialize(obj, bufferInfo) {
    // Serializes a message object of type simRosEndDialogResponse
    // Serialize message field [result]
    bufferInfo = _serializer.int32(obj.result, bufferInfo);
    return bufferInfo;
  }

  static deserialize(buffer) {
    //deserializes a message object of type simRosEndDialogResponse
    let tmp;
    let len;
    let data = new simRosEndDialogResponse();
    // Deserialize message field [result]
    tmp = _deserializer.int32(buffer);
    data.result = tmp.data;
    buffer = tmp.buffer;
    return {
      data: data,
      buffer: buffer
    }
  }

  static datatype() {
    // Returns string type for a service object
    return 'vrep_common/simRosEndDialogResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '034a8e20d6a306665e3a5b340fab3f09';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    int32 result
    
    
    `;
  }

};

module.exports = {
  Request: simRosEndDialogRequest,
  Response: simRosEndDialogResponse
};
