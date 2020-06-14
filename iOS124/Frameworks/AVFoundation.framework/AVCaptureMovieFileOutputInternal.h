//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVWeakReference, NSArray, NSDictionary, NSMutableArray, NSString;

@interface AVCaptureMovieFileOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    NSMutableArray *recordingDelegatesArray;
    NSMutableArray *connectionsThatRecordVideoOrientationAndMirroringChangesAsMetadataTrack;
    CDStruct_1b6d18a9 movieFragmentInterval;
    NSArray *metadata;
    NSArray *availableVideoCodecs;
    NSString *videoCodec;
    NSDictionary *videoCompressionProperties;
    _Bool sendLastVideoPreviewFrame;
    _Bool recording;
    _Bool paused;
    NSString *bravoCameraSelectionBehaviorForRecording;
}

- (void)dealloc;
- (id)init;

@end

