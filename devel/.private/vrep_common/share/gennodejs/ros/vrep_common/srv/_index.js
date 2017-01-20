
"use strict";

let simRosEraseFile = require('./simRosEraseFile.js')
let simRosPauseSimulation = require('./simRosPauseSimulation.js')
let simRosStartSimulation = require('./simRosStartSimulation.js')
let simRosSynchronous = require('./simRosSynchronous.js')
let simRosRemoveObject = require('./simRosRemoveObject.js')
let simRosGetUIHandle = require('./simRosGetUIHandle.js')
let simRosAppendStringSignal = require('./simRosAppendStringSignal.js')
let simRosTransferFile = require('./simRosTransferFile.js')
let simRosGetBooleanParameter = require('./simRosGetBooleanParameter.js')
let simRosSetSphericalJointMatrix = require('./simRosSetSphericalJointMatrix.js')
let simRosGetStringSignal = require('./simRosGetStringSignal.js')
let simRosDisplayDialog = require('./simRosDisplayDialog.js')
let simRosDisablePublisher = require('./simRosDisablePublisher.js')
let simRosRemoveModel = require('./simRosRemoveModel.js')
let simRosGetCollectionHandle = require('./simRosGetCollectionHandle.js')
let simRosReadDistance = require('./simRosReadDistance.js')
let simRosGetLastErrors = require('./simRosGetLastErrors.js')
let simRosReadProximitySensor = require('./simRosReadProximitySensor.js')
let simRosGetVisionSensorImage = require('./simRosGetVisionSensorImage.js')
let simRosSetBooleanParameter = require('./simRosSetBooleanParameter.js')
let simRosAddStatusbarMessage = require('./simRosAddStatusbarMessage.js')
let simRosReadForceSensor = require('./simRosReadForceSensor.js')
let simRosSetUIButtonLabel = require('./simRosSetUIButtonLabel.js')
let simRosSetIntegerSignal = require('./simRosSetIntegerSignal.js')
let simRosGetJointMatrix = require('./simRosGetJointMatrix.js')
let simRosSetObjectFloatParameter = require('./simRosSetObjectFloatParameter.js')
let simRosGetUIEventButton = require('./simRosGetUIEventButton.js')
let simRosGetObjectGroupData = require('./simRosGetObjectGroupData.js')
let simRosRemoveUI = require('./simRosRemoveUI.js')
let simRosLoadScene = require('./simRosLoadScene.js')
let simRosGetObjectFloatParameter = require('./simRosGetObjectFloatParameter.js')
let simRosEnableSubscriber = require('./simRosEnableSubscriber.js')
let simRosSetObjectQuaternion = require('./simRosSetObjectQuaternion.js')
let simRosSetJointPosition = require('./simRosSetJointPosition.js')
let simRosAuxiliaryConsolePrint = require('./simRosAuxiliaryConsolePrint.js')
let simRosGetDialogInput = require('./simRosGetDialogInput.js')
let simRosGetVisionSensorDepthBuffer = require('./simRosGetVisionSensorDepthBuffer.js')
let simRosSetStringSignal = require('./simRosSetStringSignal.js')
let simRosDisableSubscriber = require('./simRosDisableSubscriber.js')
let simRosSetJointTargetVelocity = require('./simRosSetJointTargetVelocity.js')
let simRosGetObjectHandle = require('./simRosGetObjectHandle.js')
let simRosSetUISlider = require('./simRosSetUISlider.js')
let simRosAuxiliaryConsoleOpen = require('./simRosAuxiliaryConsoleOpen.js')
let simRosGetDistanceHandle = require('./simRosGetDistanceHandle.js')
let simRosAuxiliaryConsoleClose = require('./simRosAuxiliaryConsoleClose.js')
let simRosSetObjectPose = require('./simRosSetObjectPose.js')
let simRosSetFloatingParameter = require('./simRosSetFloatingParameter.js')
let simRosSetJointTargetPosition = require('./simRosSetJointTargetPosition.js')
let simRosGetUISlider = require('./simRosGetUISlider.js')
let simRosGetAndClearStringSignal = require('./simRosGetAndClearStringSignal.js')
let simRosGetFloatSignal = require('./simRosGetFloatSignal.js')
let simRosGetObjectParent = require('./simRosGetObjectParent.js')
let simRosEndDialog = require('./simRosEndDialog.js')
let simRosGetFloatingParameter = require('./simRosGetFloatingParameter.js')
let simRosGetObjectIntParameter = require('./simRosGetObjectIntParameter.js')
let simRosGetModelProperty = require('./simRosGetModelProperty.js')
let simRosCreateDummy = require('./simRosCreateDummy.js')
let simRosSetUIButtonProperty = require('./simRosSetUIButtonProperty.js')
let simRosCopyPasteObjects = require('./simRosCopyPasteObjects.js')
let simRosSetIntegerParameter = require('./simRosSetIntegerParameter.js')
let simRosSetFloatSignal = require('./simRosSetFloatSignal.js')
let simRosSynchronousTrigger = require('./simRosSynchronousTrigger.js')
let simRosGetInfo = require('./simRosGetInfo.js')
let simRosBreakForceSensor = require('./simRosBreakForceSensor.js')
let simRosSetVisionSensorImage = require('./simRosSetVisionSensorImage.js')
let simRosGetJointState = require('./simRosGetJointState.js')
let simRosSetObjectSelection = require('./simRosSetObjectSelection.js')
let simRosAuxiliaryConsoleShow = require('./simRosAuxiliaryConsoleShow.js')
let simRosGetCollisionHandle = require('./simRosGetCollisionHandle.js')
let simRosClearFloatSignal = require('./simRosClearFloatSignal.js')
let simRosGetObjectChild = require('./simRosGetObjectChild.js')
let simRosSetModelProperty = require('./simRosSetModelProperty.js')
let simRosGetObjectSelection = require('./simRosGetObjectSelection.js')
let simRosGetObjects = require('./simRosGetObjects.js')
let simRosSetJointForce = require('./simRosSetJointForce.js')
let simRosGetDialogResult = require('./simRosGetDialogResult.js')
let simRosSetObjectPosition = require('./simRosSetObjectPosition.js')
let simRosGetIntegerSignal = require('./simRosGetIntegerSignal.js')
let simRosCloseScene = require('./simRosCloseScene.js')
let simRosLoadUI = require('./simRosLoadUI.js')
let simRosClearIntegerSignal = require('./simRosClearIntegerSignal.js')
let simRosStopSimulation = require('./simRosStopSimulation.js')
let simRosGetStringParameter = require('./simRosGetStringParameter.js')
let simRosGetObjectPose = require('./simRosGetObjectPose.js')
let simRosSetArrayParameter = require('./simRosSetArrayParameter.js')
let simRosGetArrayParameter = require('./simRosGetArrayParameter.js')
let simRosEnablePublisher = require('./simRosEnablePublisher.js')
let simRosClearStringSignal = require('./simRosClearStringSignal.js')
let simRosGetUIButtonProperty = require('./simRosGetUIButtonProperty.js')
let simRosSetObjectParent = require('./simRosSetObjectParent.js')
let simRosReadVisionSensor = require('./simRosReadVisionSensor.js')
let simRosCallScriptFunction = require('./simRosCallScriptFunction.js')
let simRosReadCollision = require('./simRosReadCollision.js')
let simRosSetObjectIntParameter = require('./simRosSetObjectIntParameter.js')
let simRosSetJointState = require('./simRosSetJointState.js')
let simRosGetIntegerParameter = require('./simRosGetIntegerParameter.js')
let simRosLoadModel = require('./simRosLoadModel.js')

module.exports = {
  simRosEraseFile: simRosEraseFile,
  simRosPauseSimulation: simRosPauseSimulation,
  simRosStartSimulation: simRosStartSimulation,
  simRosSynchronous: simRosSynchronous,
  simRosRemoveObject: simRosRemoveObject,
  simRosGetUIHandle: simRosGetUIHandle,
  simRosAppendStringSignal: simRosAppendStringSignal,
  simRosTransferFile: simRosTransferFile,
  simRosGetBooleanParameter: simRosGetBooleanParameter,
  simRosSetSphericalJointMatrix: simRosSetSphericalJointMatrix,
  simRosGetStringSignal: simRosGetStringSignal,
  simRosDisplayDialog: simRosDisplayDialog,
  simRosDisablePublisher: simRosDisablePublisher,
  simRosRemoveModel: simRosRemoveModel,
  simRosGetCollectionHandle: simRosGetCollectionHandle,
  simRosReadDistance: simRosReadDistance,
  simRosGetLastErrors: simRosGetLastErrors,
  simRosReadProximitySensor: simRosReadProximitySensor,
  simRosGetVisionSensorImage: simRosGetVisionSensorImage,
  simRosSetBooleanParameter: simRosSetBooleanParameter,
  simRosAddStatusbarMessage: simRosAddStatusbarMessage,
  simRosReadForceSensor: simRosReadForceSensor,
  simRosSetUIButtonLabel: simRosSetUIButtonLabel,
  simRosSetIntegerSignal: simRosSetIntegerSignal,
  simRosGetJointMatrix: simRosGetJointMatrix,
  simRosSetObjectFloatParameter: simRosSetObjectFloatParameter,
  simRosGetUIEventButton: simRosGetUIEventButton,
  simRosGetObjectGroupData: simRosGetObjectGroupData,
  simRosRemoveUI: simRosRemoveUI,
  simRosLoadScene: simRosLoadScene,
  simRosGetObjectFloatParameter: simRosGetObjectFloatParameter,
  simRosEnableSubscriber: simRosEnableSubscriber,
  simRosSetObjectQuaternion: simRosSetObjectQuaternion,
  simRosSetJointPosition: simRosSetJointPosition,
  simRosAuxiliaryConsolePrint: simRosAuxiliaryConsolePrint,
  simRosGetDialogInput: simRosGetDialogInput,
  simRosGetVisionSensorDepthBuffer: simRosGetVisionSensorDepthBuffer,
  simRosSetStringSignal: simRosSetStringSignal,
  simRosDisableSubscriber: simRosDisableSubscriber,
  simRosSetJointTargetVelocity: simRosSetJointTargetVelocity,
  simRosGetObjectHandle: simRosGetObjectHandle,
  simRosSetUISlider: simRosSetUISlider,
  simRosAuxiliaryConsoleOpen: simRosAuxiliaryConsoleOpen,
  simRosGetDistanceHandle: simRosGetDistanceHandle,
  simRosAuxiliaryConsoleClose: simRosAuxiliaryConsoleClose,
  simRosSetObjectPose: simRosSetObjectPose,
  simRosSetFloatingParameter: simRosSetFloatingParameter,
  simRosSetJointTargetPosition: simRosSetJointTargetPosition,
  simRosGetUISlider: simRosGetUISlider,
  simRosGetAndClearStringSignal: simRosGetAndClearStringSignal,
  simRosGetFloatSignal: simRosGetFloatSignal,
  simRosGetObjectParent: simRosGetObjectParent,
  simRosEndDialog: simRosEndDialog,
  simRosGetFloatingParameter: simRosGetFloatingParameter,
  simRosGetObjectIntParameter: simRosGetObjectIntParameter,
  simRosGetModelProperty: simRosGetModelProperty,
  simRosCreateDummy: simRosCreateDummy,
  simRosSetUIButtonProperty: simRosSetUIButtonProperty,
  simRosCopyPasteObjects: simRosCopyPasteObjects,
  simRosSetIntegerParameter: simRosSetIntegerParameter,
  simRosSetFloatSignal: simRosSetFloatSignal,
  simRosSynchronousTrigger: simRosSynchronousTrigger,
  simRosGetInfo: simRosGetInfo,
  simRosBreakForceSensor: simRosBreakForceSensor,
  simRosSetVisionSensorImage: simRosSetVisionSensorImage,
  simRosGetJointState: simRosGetJointState,
  simRosSetObjectSelection: simRosSetObjectSelection,
  simRosAuxiliaryConsoleShow: simRosAuxiliaryConsoleShow,
  simRosGetCollisionHandle: simRosGetCollisionHandle,
  simRosClearFloatSignal: simRosClearFloatSignal,
  simRosGetObjectChild: simRosGetObjectChild,
  simRosSetModelProperty: simRosSetModelProperty,
  simRosGetObjectSelection: simRosGetObjectSelection,
  simRosGetObjects: simRosGetObjects,
  simRosSetJointForce: simRosSetJointForce,
  simRosGetDialogResult: simRosGetDialogResult,
  simRosSetObjectPosition: simRosSetObjectPosition,
  simRosGetIntegerSignal: simRosGetIntegerSignal,
  simRosCloseScene: simRosCloseScene,
  simRosLoadUI: simRosLoadUI,
  simRosClearIntegerSignal: simRosClearIntegerSignal,
  simRosStopSimulation: simRosStopSimulation,
  simRosGetStringParameter: simRosGetStringParameter,
  simRosGetObjectPose: simRosGetObjectPose,
  simRosSetArrayParameter: simRosSetArrayParameter,
  simRosGetArrayParameter: simRosGetArrayParameter,
  simRosEnablePublisher: simRosEnablePublisher,
  simRosClearStringSignal: simRosClearStringSignal,
  simRosGetUIButtonProperty: simRosGetUIButtonProperty,
  simRosSetObjectParent: simRosSetObjectParent,
  simRosReadVisionSensor: simRosReadVisionSensor,
  simRosCallScriptFunction: simRosCallScriptFunction,
  simRosReadCollision: simRosReadCollision,
  simRosSetObjectIntParameter: simRosSetObjectIntParameter,
  simRosSetJointState: simRosSetJointState,
  simRosGetIntegerParameter: simRosGetIntegerParameter,
  simRosLoadModel: simRosLoadModel,
};
