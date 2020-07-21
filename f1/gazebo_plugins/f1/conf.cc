// cam_f1_left.cfg
CameraGazebo.Endpoints=default -h 0.0.0.0 -p 8995:ws -h 0.0.0.0 -p 11000

#camera 1
CameraGazebo.Camera.0.Name=cameraA
CameraGazebo.Camera.0.ImageWidth=320
CameraGazebo.Camera.0.ImageHeight=240
CameraGazebo.Camera.0.Format=RGB8


// cam_f1_right.cfg
CameraGazebo.Endpoints=default -h 0.0.0.0 -p 8994:ws -h 0.0.0.0 -p 11001

#camera 1
CameraGazebo.Camera.0.Name=cameraA
CameraGazebo.Camera.0.ImageWidth=320
CameraGazebo.Camera.0.ImageHeight=240
CameraGazebo.Camera.0.Format=RGB8


// f1_laser.cfg
Laser.Endpoints=default -h 0.0.0.0 -p 8996:ws -h 0.0.0.0 -p 11004

//  f1Motors.cfg
Motors.Endpoints=default -h 0.0.0.0 -p 9999:ws -h 0.0.0.0 -p 11002

// f1Pose3D.cfg
Pose3D.Endpoints=default -h 0.0.0.0 -p 8998:ws -h 0.0.0.0 -p 11003