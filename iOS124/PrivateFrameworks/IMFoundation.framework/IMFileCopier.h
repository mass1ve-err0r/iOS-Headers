//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol IMFileCopierDelegate, OS_dispatch_queue;

@interface IMFileCopier : NSObject
{
    _Bool _shouldCancel;
    _Bool _didErrorOccur;
    _Bool _inProgress;
    id <IMFileCopierDelegate> _delegate;
    NSURL *_inputURL;
    NSURL *_outputURL;
    id _identifier;
    unsigned long long _operation;
    void *_BOMCopier;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _callback;
}

@property(copy) CDUnknownBlockType _callback; // @synthesize _callback;
@property(retain) NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue;
@property void *_BOMCopier; // @synthesize _BOMCopier;
@property unsigned long long operation; // @synthesize operation=_operation;
@property _Bool inProgress; // @synthesize inProgress=_inProgress;
@property(readonly, nonatomic) _Bool didErrorOccur; // @synthesize didErrorOccur=_didErrorOccur;
@property(readonly, nonatomic) _Bool wasCancelled; // @synthesize wasCancelled=_shouldCancel;
@property(readonly, retain) id identifier; // @synthesize identifier=_identifier;
@property(readonly, retain) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly, retain) NSURL *inputURL; // @synthesize inputURL=_inputURL;
@property id <IMFileCopierDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_worker_doCopy;
- (void)_main_copierFinishedWithResult:(id)arg1;
- (void)cleanup;
- (void)cancel;
- (void)start;
- (void)_fillOutputURLFromInputURL;
- (id)_temporaryCopierPath;
- (void)dealloc;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5 queue:(id)arg6;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned long long)arg4 delegate:(id)arg5;

@end

