//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureBracketedStillImageSettings;

@interface AVCaptureStillImageRequest : NSObject
{
    CDUnknownBlockType _sbufCompletionBlock;
    CDUnknownBlockType _iosurfaceCompletionBlock;
    CDUnknownBlockType _bracketedCaptureCompletionBlock;
    long long _settingsID;
    unsigned int _shutterSoundID;
    AVCaptureBracketedStillImageSettings *_bracketedSettings;
}

+ (id)request;
@property(retain) AVCaptureBracketedStillImageSettings *bracketedSettings; // @synthesize bracketedSettings=_bracketedSettings;
@property unsigned int shutterSoundID; // @synthesize shutterSoundID=_shutterSoundID;
@property long long settingsID; // @synthesize settingsID=_settingsID;
@property(copy) CDUnknownBlockType bracketedCaptureCompletionBlock; // @synthesize bracketedCaptureCompletionBlock=_bracketedCaptureCompletionBlock;
@property(copy) CDUnknownBlockType iosurfaceCompletionBlock; // @synthesize iosurfaceCompletionBlock=_iosurfaceCompletionBlock;
@property(copy) CDUnknownBlockType sbufCompletionBlock; // @synthesize sbufCompletionBlock=_sbufCompletionBlock;
- (void)dealloc;

@end

