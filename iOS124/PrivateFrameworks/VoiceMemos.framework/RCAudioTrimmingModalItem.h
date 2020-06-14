//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetExportSession, NSOperationQueue, NSString, RCActionSheetController, RCAudioTrimmingModalItemViewController, RCTrimTimeRangeOperation;
@protocol RCAudioTrimmingModalItemDelegate, RCRecording;

@interface RCAudioTrimmingModalItem : NSObject
{
    AVAssetExportSession *_exportSession;
    NSString *_sourcePath;
    NSString *_destinationPath;
    _Bool _playing;
    _Bool _isBeingDismissed;
    _Bool _cancelTrimRequested;
    RCTrimTimeRangeOperation *_trimOperation;
    NSOperationQueue *_trimOperationQueue;
    RCActionSheetController *_presentedActionSheetController;
    RCAudioTrimmingModalItemViewController *_trimmingViewController;
    _Bool _deletesDestinationPathWhenDone;
    id <RCAudioTrimmingModalItemDelegate> _delegate;
    double _maximumTrimmedDuration;
    id <RCRecording> _recording;
}

+ (id)exportableAudioFormatPathExtensionWithSourceURL:(id)arg1;
@property(readonly, nonatomic) id <RCRecording> recording; // @synthesize recording=_recording;
@property(nonatomic) double maximumTrimmedDuration; // @synthesize maximumTrimmedDuration=_maximumTrimmedDuration;
@property(nonatomic) _Bool deletesDestinationPathWhenDone; // @synthesize deletesDestinationPathWhenDone=_deletesDestinationPathWhenDone;
@property(readonly, copy, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(readonly, copy, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
@property(nonatomic) __weak id <RCAudioTrimmingModalItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_dismissAnimated:(_Bool)arg1;
- (void)dismiss;
- (void)_handleTrimSheetActionWithClickedButtonIndex:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showWithPresentationViewController:(id)arg1 source:(id)arg2 message:(id)arg3 trimButtonTitle:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
- (id)init;

@end
