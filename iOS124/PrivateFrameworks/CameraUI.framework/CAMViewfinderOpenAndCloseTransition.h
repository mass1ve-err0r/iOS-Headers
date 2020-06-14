//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMSnapshotView, CAMViewfinderView;

@interface CAMViewfinderOpenAndCloseTransition : NSObject
{
    _Bool _didEnterBackground;
    CAMViewfinderView *__viewfinderView;
    CAMSnapshotView *__snapshotView;
}

@property(retain, nonatomic, setter=_setSnapshotView:) CAMSnapshotView *_snapshotView; // @synthesize _snapshotView=__snapshotView;
@property(readonly, nonatomic) __weak CAMViewfinderView *_viewfinderView; // @synthesize _viewfinderView=__viewfinderView;
@property(nonatomic) _Bool didEnterBackground; // @synthesize didEnterBackground=_didEnterBackground;
- (void).cxx_destruct;
- (void)closeWithoutBlurring;
- (void)closeAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)openAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_closeViewfinder:(_Bool)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_existingSnapshotViewCreateIfNecessary:(_Bool)arg1 removedOnCompletion:(_Bool)arg2;
- (id)initWithViewfinderView:(id)arg1;

@end

