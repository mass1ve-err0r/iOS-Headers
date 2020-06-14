//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNDetector.h>

__attribute__((visibility("hidden")))
@interface VNTorsoprintGenerator : VNDetector
{
    void *_mEspressoContext;
    void *_mEspressoPlan;
    CDStruct_2bc666a5 _mEspressoNetwork;
}

+ (id)configurationOptionKeysForDetectorKey;
+ (float)_minimumTorsoInsideInputImageThreshold;
+ (struct CGSize)_torsoprintDescriptorSize;
+ (struct CGSize)_torsoprintInputImageSize;
- (_Bool)_calculateTorsoBBoxFromFaceBBox:(struct CGRect)arg1 insideImageWithSize:(struct CGSize)arg2 faceOrientationRelativeToUpright:(int)arg3 torsoBBox:(struct CGRect *)arg4 error:(id *)arg5;
- (void)dealloc;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (_Bool)completeInitializationAndReturnError:(id *)arg1;

@end

